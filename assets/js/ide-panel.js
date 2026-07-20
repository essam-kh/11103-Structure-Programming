(function () {
  'use strict';

  var OPEN_KEY  = 'ide-open';
  var WIDTH_KEY = 'ide-width';
  var DEFAULT_W = 680;
  var MIN_W     = 340;

  var EMBED_URL = 'https://onecompiler.com/embed/c?theme=dark&hideNewFileOption=true&hideTitle=true';

  var tab          = document.getElementById('ide-tab');
  var panel        = document.getElementById('ide-panel');
  var frame        = document.getElementById('ide-frame');
  var resizeHandle = document.getElementById('ide-resize-handle');

  var frameLoaded = false;

  /* ── Width ── */
  function applyWidth(w) {
    w = Math.max(MIN_W, Math.min(w, Math.round(window.innerWidth * 0.85)));
    panel.style.width = w + 'px';
    localStorage.setItem(WIDTH_KEY, w);
  }

  applyWidth(parseInt(localStorage.getItem(WIDTH_KEY), 10) || DEFAULT_W);

  /* ── Drag to resize ── */
  var isResizing = false;
  var startX, startW;

  resizeHandle.addEventListener('mousedown', function (e) {
    isResizing = true;
    startX = e.clientX;
    startW = panel.offsetWidth;
    document.body.style.cursor = 'ew-resize';
    document.body.style.userSelect = 'none';
    frame.style.pointerEvents = 'none';
    e.preventDefault();
  });

  document.addEventListener('mousemove', function (e) {
    if (!isResizing) return;
    applyWidth(startW + (e.clientX - startX));
  });

  document.addEventListener('mouseup', function () {
    if (!isResizing) return;
    isResizing = false;
    document.body.style.cursor = '';
    document.body.style.userSelect = '';
    frame.style.pointerEvents = '';
  });

  /* ── Open / close ── */
  function openPanel() {
    if (!frameLoaded) {
      frame.src = EMBED_URL;
      frameLoaded = true;
    }
    panel.classList.add('is-open');
    localStorage.setItem(OPEN_KEY, '1');
  }

  function closePanel() {
    panel.classList.remove('is-open');
    localStorage.setItem(OPEN_KEY, '0');
  }

  if (localStorage.getItem(OPEN_KEY) === '1') { openPanel(); }

  tab.addEventListener('click', function () {
    panel.classList.contains('is-open') ? closePanel() : openPanel();
  });
})();
