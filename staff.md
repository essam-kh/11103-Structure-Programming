---
layout: page
title: 2. Staff
description: A listing of all the course staff members.
---

# Staff

## Course Coordinator

<br>

{% assign coordinators = site.staffers | where: 'role', 'Coordinator' %}
{% for staffer in coordinators %}
{{ staffer }}
{% endfor %}

## Instructors
 
<br>

{% assign instructors = site.staffers | where: 'role', 'Instructor' %}
{% for staffer in instructors %}
{{ staffer }}

<br>

{% endfor %}

{% assign teaching_assistants = site.staffers | where: 'role', 'Teaching Assistant' %}
{% assign num_teaching_assistants = teaching_assistants | size %}
{% if num_teaching_assistants != 0 %}
## Teaching Assistants
<br>

{% for staffer in teaching_assistants %}
{{ staffer }}
{% endfor %}
{% endif %}
