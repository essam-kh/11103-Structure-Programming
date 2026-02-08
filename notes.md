---
layout: page
title: 3. Course Notes
description: Weekly course notes and materials.
---

# Course Notes

{% for module in site.modules %}
  {% if module.note %}
    <div class="schedule-note">
    {{ module.note }}
    </div>
  {% endif %}
  {% include module.html module=module %}
{% endfor %}