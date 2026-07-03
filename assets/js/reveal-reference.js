(function() {
  'use strict';
  document.addEventListener('DOMContentLoaded', function() {
    var buttons = document.querySelectorAll('.reveal-ref-btn');
    buttons.forEach(function(btn) {
      btn.addEventListener('click', function() {
        var content = this.nextElementSibling;
        if (content && content.classList.contains('reveal-ref-content')) {
          content.classList.toggle('is-visible');
          var isExpanded = content.classList.contains('is-visible');
          
          if (isExpanded) {
            content.style.maxHeight = content.scrollHeight + "px";
          } else {
            content.style.maxHeight = "0";
          }

          var icon = this.querySelector('.ref-icon');
          if (icon) {
            icon.textContent = isExpanded ? '📖' : '📘';
          }
        }
      });
    });
  });
})();
