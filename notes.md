---
layout: page
title: 2. Course Notes
description: Weekly course notes and materials.
---

# Course Notes

<div class="lang-toggle-container">
    <div class="lang-toggle-pill">
        <button id="btn-c" class="lang-toggle-btn active">C</button>
        <button id="btn-cpp" class="lang-toggle-btn">C++</button>
    </div>
</div>
<p class="lang-toggle-desc">Toggle between C and C++ to instantly translate all code examples, syntax guides, and worksheet solutions across the site. Your preference is saved automatically.</p>

{% for module in site.modules %}
  {% if module.note %}
    <div class="schedule-note">
    {{ module.note }}
    </div>
  {% endif %}
  {% include module.html module=module %}
{% endfor %}