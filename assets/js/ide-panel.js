var ideOpen = false;
var ideLoaded = false;
var EMBED_URL = 'https://onecompiler.com/embed/c?theme=dark&hideNewFileOption=true&hideTitle=true';

function toggleIDE() {
  ideOpen = !ideOpen;
  var panel = document.getElementById('ide-panel');
  var fab = document.getElementById('fab-playground');

  if (ideOpen) {
    if (!ideLoaded) {
      document.getElementById('ide-frame').src = EMBED_URL;
      ideLoaded = true;
    }
    panel.classList.add('is-open');
    fab.classList.add('is-open');
  } else {
    panel.classList.remove('is-open');
    fab.classList.remove('is-open');
  }
}

// ── Fullscreen toggle ──
var isFullscreen = false;
function toggleFullscreen() {
  var panel = document.getElementById('ide-panel');
  isFullscreen = !isFullscreen;
  if (isFullscreen) {
    panel.style.top = '0';
    panel.style.left = '0';
    panel.style.right = '0';
    panel.style.bottom = '0';
    panel.style.width = '100vw';
    panel.style.height = '100vh';
    panel.style.borderRadius = '0';
  } else {
    panel.style.top = '';
    panel.style.left = '24px';
    panel.style.right = '';
    panel.style.bottom = '96px';
    panel.style.width = '680px';
    panel.style.height = '520px';
    panel.style.borderRadius = '';
  }
}

// ── Drag to move (header) ──
(function() {
  var handle = document.getElementById('ide-drag-handle');
  var panel = document.getElementById('ide-panel');
  var isDragging = false;
  var startX, startY, startLeft, startTop;

  handle.addEventListener('mousedown', function(e) {
    if (e.target.closest('.ide-panel-action-btn')) return;
    isDragging = true;
    var rect = panel.getBoundingClientRect();
    startX = e.clientX;
    startY = e.clientY;
    startLeft = rect.left;
    startTop = rect.top;
    panel.style.left = rect.left + 'px';
    panel.style.top = rect.top + 'px';
    panel.style.right = 'auto';
    panel.style.bottom = 'auto';
    document.body.style.cursor = 'grabbing';
    document.body.style.userSelect = 'none';
    document.getElementById('ide-frame').style.pointerEvents = 'none';
    e.preventDefault();
  });

  document.addEventListener('mousemove', function(e) {
    if (!isDragging) return;
    panel.style.left = (startLeft + e.clientX - startX) + 'px';
    panel.style.top = (startTop + e.clientY - startY) + 'px';
  });

  document.addEventListener('mouseup', function() {
    if (!isDragging) return;
    isDragging = false;
    document.body.style.cursor = '';
    document.body.style.userSelect = '';
    document.getElementById('ide-frame').style.pointerEvents = '';
  });
})();

// ── Resize from edges/corners ──
(function() {
  var panel = document.getElementById('ide-panel');
  var edges = document.querySelectorAll('.ide-resize-edge');
  var isResizing = false;
  var currentEdge = '';
  var startX, startY, startRect;

  edges.forEach(function(edge) {
    edge.addEventListener('mousedown', function(e) {
      isResizing = true;
      currentEdge = this.getAttribute('data-resize');
      startX = e.clientX;
      startY = e.clientY;
      startRect = panel.getBoundingClientRect();
      panel.style.left = startRect.left + 'px';
      panel.style.top = startRect.top + 'px';
      panel.style.right = 'auto';
      panel.style.bottom = 'auto';
      document.body.style.userSelect = 'none';
      document.getElementById('ide-frame').style.pointerEvents = 'none';
      e.preventDefault();
      e.stopPropagation();
    });
  });

  document.addEventListener('mousemove', function(e) {
    if (!isResizing) return;
    var dx = e.clientX - startX;
    var dy = e.clientY - startY;
    var minW = 400, minH = 300;

    if (currentEdge.includes('right')) {
      panel.style.width = Math.max(minW, startRect.width + dx) + 'px';
    }
    if (currentEdge.includes('left')) {
      var newW = Math.max(minW, startRect.width - dx);
      panel.style.width = newW + 'px';
      panel.style.left = (startRect.left + startRect.width - newW) + 'px';
    }
    if (currentEdge.includes('bottom')) {
      panel.style.height = Math.max(minH, startRect.height + dy) + 'px';
    }
    if (currentEdge.includes('top')) {
      var newH = Math.max(minH, startRect.height - dy);
      panel.style.height = newH + 'px';
      panel.style.top = (startRect.top + startRect.height - newH) + 'px';
    }
  });

  document.addEventListener('mouseup', function() {
    if (!isResizing) return;
    isResizing = false;
    document.body.style.userSelect = '';
    document.getElementById('ide-frame').style.pointerEvents = '';
  });
})();
