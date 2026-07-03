// Question Filters - handles difficulty filtering and sorting on worksheet pages
(function () {
  var RANK = { easy: 1, medium: 2, hard: 3 };

  function getCards() {
    return Array.from(document.querySelectorAll('.question-card'));
  }

  function getActiveFilter() {
    var btn = document.querySelector('.filter-btn.active');
    return btn ? btn.getAttribute('data-filter') : 'all';
  }

  function applyFiltersAndSort() {
    var cards = getCards();
    if (!cards.length) return;

    var activeFilter = getActiveFilter();
    var sortSelect = document.getElementById('difficulty-sort');
    var sortValue = sortSelect ? sortSelect.value : 'default';

    // --- Filter ---
    cards.forEach(function (card) {
      var diff = (card.getAttribute('data-question-difficulty') || '').toLowerCase();
      if (activeFilter === 'all' || activeFilter === diff) {
        card.style.display = '';
      } else {
        card.style.display = 'none';
      }
    });

    // --- Sort ---
    // Find the anchor element to insert cards before (week-nav or end of parent)
    var parent = cards[0].parentNode;
    var anchor = parent.querySelector('.week-navigation') || null;

    var sorted;
    if (sortValue === 'default') {
      sorted = cards.slice().sort(function (a, b) {
        return parseInt(a.dataset.origIdx || 0) - parseInt(b.dataset.origIdx || 0);
      });
    } else {
      sorted = cards.slice().sort(function (a, b) {
        var da = RANK[(a.getAttribute('data-question-difficulty') || '').toLowerCase()] || 0;
        var db = RANK[(b.getAttribute('data-question-difficulty') || '').toLowerCase()] || 0;
        return sortValue === 'asc' ? da - db : db - da;
      });
    }

    // Re-insert cards in sorted order, always BEFORE the nav anchor
    sorted.forEach(function (card) {
      if (anchor) {
        parent.insertBefore(card, anchor);
      } else {
        parent.appendChild(card);
      }
    });
  }

  function injectBadges() {
    getCards().forEach(function (card, i) {
      // Store original order index once
      if (!card.dataset.origIdx) card.dataset.origIdx = i;

      var diff = (card.getAttribute('data-question-difficulty') || '').toLowerCase();
      if (!diff) return;
      var heading = card.querySelector('h2');
      if (heading && !heading.querySelector('.difficulty-badge')) {
        var badge = document.createElement('span');
        badge.className = 'difficulty-badge ' + diff;
        badge.textContent = diff;
        heading.appendChild(badge);
      }
    });
  }

  function initFilters() {
    var cards = getCards();
    if (!cards.length) return;

    injectBadges();

    // Use event delegation on the document so listeners survive PJAX reloads
    document.addEventListener('click', function (e) {
      var btn = e.target.closest('.filter-btn');
      if (!btn) return;
      document.querySelectorAll('.filter-btn').forEach(function (b) {
        b.classList.remove('active');
      });
      btn.classList.add('active');

      // "All" = revert to original state (reset sort too)
      if (btn.getAttribute('data-filter') === 'all') {
        var sortSelect = document.getElementById('difficulty-sort');
        if (sortSelect) sortSelect.value = 'default';
      }

      applyFiltersAndSort();
    });

    var sortSelect = document.getElementById('difficulty-sort');
    if (sortSelect) {
      sortSelect.addEventListener('change', applyFiltersAndSort);
    }
  }

  // Run on initial page load
  if (document.readyState === 'loading') {
    document.addEventListener('DOMContentLoaded', initFilters);
  } else {
    initFilters();
  }

  // Re-run after PJAX navigation (just-the-docs uses turbolinks/pjax style navigation)
  document.addEventListener('turbolinks:load', initFilters);
  document.addEventListener('page:load', initFilters);

})();
