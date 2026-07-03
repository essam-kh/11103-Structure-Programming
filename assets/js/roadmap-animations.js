(function () {
  'use strict';

  document.addEventListener('DOMContentLoaded', function () {
    var roadmap = document.querySelector('.roadmap-tree');
    if (!roadmap) return; // only runs on the guidance page

    // Pre-calculate and store stagger delays on each node
    roadmap.querySelectorAll('.rtree-section').forEach(function (section) {
      section.querySelectorAll('.rtree-node').forEach(function (node, idx) {
        var baseDelay = idx * 110;
        // Store for reuse on re-entrance
        node.dataset.entranceDelay = baseDelay;
        node.style.transitionDelay = baseDelay + 'ms';
        var dot = node.querySelector('.rtree-dot');
        if (dot) {
          dot.dataset.entranceDelay = baseDelay + 80;
          dot.style.transitionDelay = (baseDelay + 80) + 'ms';
        }
      });
    });

    // Fallback: reveal everything if IntersectionObserver is unavailable
    if (!('IntersectionObserver' in window)) {
      roadmap.querySelectorAll('.rtree-phase-header, .rtree-node').forEach(function (el) {
        el.classList.add('is-visible');
      });
      return;
    }

    var observer = new IntersectionObserver(function (entries) {
      entries.forEach(function (entry) {
        var el = entry.target;
        var dot = el.querySelector && el.querySelector('.rtree-dot');

        if (entry.isIntersecting) {
          // Restore stagger delay for entrance so cards appear one-by-one
          el.style.transitionDelay = (el.dataset.entranceDelay || 0) + 'ms';
          if (dot) dot.style.transitionDelay = (dot.dataset.entranceDelay || 80) + 'ms';
          el.classList.add('is-visible');
        } else {
          // No stagger on exit — all elements reset together, no visible lag
          el.style.transitionDelay = '0ms';
          if (dot) dot.style.transitionDelay = '0ms';
          el.classList.remove('is-visible');
        }
      });
    }, {
      threshold: 0.12,
      rootMargin: '0px 0px -30px 0px'
    });

    // Keep observing every element so scroll-up resets trigger re-animation
    roadmap.querySelectorAll('.rtree-phase-header, .rtree-node').forEach(function (el) {
      observer.observe(el);
    });
  });
}());
