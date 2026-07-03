---
layout: page
title: 2. Student Guidance
description: A recommended learning path and study strategy for the Structure Programming course.
permalink: /guidance/
---

## How to Study Each Week

> **Study Principles:**
> *   **Write from scratch:** You cannot learn programming by just reading notes. You must write and run the code yourself.
> *   **Don't rely on AI too early:** When you get stuck, try to debug it yourself first. Resorting to AI immediately skips the critical learning process.
{: .highlight }


<p class="study-loop-title">Follow this 4-step loop every week:</p>

<div class="study-loop-scroll">
  <div class="study-loop">
    <div class="study-step-card">
      <div class="study-step-number">1</div>
      <div class="study-step-label">Lecture Notes</div>
      <div class="study-step-desc">Read carefully and understand every example.</div>
    </div>

    <div class="study-step-arrow">→</div>

    <div class="study-step-card">
      <div class="study-step-number">2</div>
      <div class="study-step-label">Syntax Guide</div>
      <div class="study-step-desc">Use as a quick reference. Type the examples yourself — don't copy-paste.</div>
    </div>

    <div class="study-step-arrow">→</div>

    <div class="study-step-card">
      <div class="study-step-number">3</div>
      <div class="study-step-label">Worksheet</div>
      <div class="study-step-desc">Attempt every problem before checking solutions.</div>
    </div>

    <div class="study-step-arrow">→</div>

    <div class="study-step-card">
      <div class="study-step-number">4</div>
      <div class="study-step-label">Practice</div>
      <div class="study-step-desc">Reinforce with extra problems.</div>
    </div>
  </div>
</div>

<div style="display: grid; grid-template-columns: repeat(auto-fit, minmax(280px, 1fr)); gap: 1.5rem; margin-top: 2rem;">
  <div class="tip-card">
    <div class="tip-card-body">
      <h4 class="tip-card-title">Stuck on a Problem?</h4>
      <p class="tip-card-text">
        If you get stuck while writing code:
        <br>1. <strong>Trace on Paper:</strong> Walk through the code in your head and trace variable values step-by-step.
        <br>2. <strong>Review Syntax:</strong> Check the syntax guide or notes to identify mismatches.
        <br>3. <strong>Study the Solution:</strong> If still blocked, check the working solution and rewrite it yourself.
      </p>
    </div>
  </div>

  <div class="tip-card">
    <div class="tip-card-body">
      <h4 class="tip-card-title">Still Feel Lost or Weak?</h4>
      <p class="tip-card-text">
        If you have finished all the study loops and mockup exams but still feel like you need more practice, head over to the <a href="{{ site.baseurl }}/resources/">Resources Page</a> for extra code examples, cheat sheets, and supplementary notes.
      </p>
    </div>
  </div>
</div>

---

## Course Roadmap

<p class="roadmap-title">Each week builds directly on previous ones. Follow this path top-to-bottom.</p>

<div class="roadmap-tree">

  <!-- ── PHASE 1 ── -->
  <div class="rtree-section rtree-p1">
    <div class="rtree-phase-header">
      <span class="rtree-phase-num">PHASE 1</span>
      <span class="rtree-phase-name">Foundations</span>
      <span class="rtree-phase-goal">Write, compile, and run your first program</span>
    </div>

    <div class="rtree-node">
      <div class="rtree-dot"></div>
      <div class="rtree-card">
        <div class="rtree-node-header">
          <span class="rtree-week-tag">Week 1</span>
          <span class="rtree-topic">Introduction &amp; Basics</span>
        </div>
        <p class="rtree-desc">Variables, data types, input/output, and compiling your very first C/C++ program.</p>
        <div class="week-resource-links">
          <a href="{{ site.baseurl }}/notes/week-01/notes/"     class="week-link week-link-notes">📘 Notes</a>
          <a href="{{ site.baseurl }}/notes/week-01/syntax/"    class="week-link week-link-syntax">💻 Syntax</a>
          <a href="{{ site.baseurl }}/notes/week-01/worksheet/" class="week-link week-link-worksheet">🧩 Worksheet</a>
          <a href="{{ site.baseurl }}/notes/week-01/practice/"  class="week-link week-link-practice">🚀 Practice</a>
        </div>
      </div>
    </div>
  </div>

  <!-- ── PHASE 2 ── -->
  <div class="rtree-section rtree-p2">
    <div class="rtree-phase-header">
      <span class="rtree-phase-num">PHASE 2</span>
      <span class="rtree-phase-name">Control Flow</span>
      <span class="rtree-phase-goal">Organize code into functions and make conditional decisions</span>
    </div>

    <div class="rtree-node">
      <div class="rtree-dot"></div>
      <div class="rtree-card">
        <div class="rtree-node-header">
          <span class="rtree-week-tag">Week 2</span>
          <span class="rtree-topic">Functions</span>
        </div>
        <div class="rtree-prereqs">
          <span class="rtree-prereq-label">Builds on:</span>
          <span class="rtree-prereq-pill">Week 1 — Basics</span>
        </div>
        <p class="rtree-desc">Organize code into reusable, callable blocks with parameters and return values.</p>
        <div class="week-resource-links">
          <a href="{{ site.baseurl }}/notes/week-02/notes/"     class="week-link week-link-notes">📘 Notes</a>
          <a href="{{ site.baseurl }}/notes/week-02/syntax/"    class="week-link week-link-syntax">💻 Syntax</a>
          <a href="{{ site.baseurl }}/notes/week-02/worksheet/" class="week-link week-link-worksheet">🧩 Worksheet</a>
          <a href="{{ site.baseurl }}/notes/week-02/practice/"  class="week-link week-link-practice">🚀 Practice</a>
        </div>
      </div>
    </div>

    <div class="rtree-node">
      <div class="rtree-dot"></div>
      <div class="rtree-card">
        <div class="rtree-node-header">
          <span class="rtree-week-tag">Week 3</span>
          <span class="rtree-topic">Conditional Statements</span>
        </div>
        <div class="rtree-prereqs">
          <span class="rtree-prereq-label">Builds on:</span>
          <span class="rtree-prereq-pill">Week 1 — Basics</span>
          <span class="rtree-prereq-pill">Week 2 — Functions</span>
        </div>
        <p class="rtree-desc">if / else and switch — programs that adapt their behavior based on conditions.</p>
        <div class="week-resource-links">
          <a href="{{ site.baseurl }}/notes/week-03/notes/"     class="week-link week-link-notes">📘 Notes</a>
          <a href="{{ site.baseurl }}/notes/week-03/syntax/"    class="week-link week-link-syntax">💻 Syntax</a>
          <a href="{{ site.baseurl }}/notes/week-03/worksheet/" class="week-link week-link-worksheet">🧩 Worksheet</a>
          <a href="{{ site.baseurl }}/notes/week-03/practice/"  class="week-link week-link-practice">🚀 Practice</a>
        </div>
      </div>
    </div>
  </div>

  <!-- ── PHASE 3 ── -->
  <div class="rtree-section rtree-p3">
    <div class="rtree-phase-header">
      <span class="rtree-phase-num">PHASE 3</span>
      <span class="rtree-phase-name">Data Structures</span>
      <span class="rtree-phase-goal">Store and process collections of data with loops and arrays</span>
    </div>

    <div class="rtree-node">
      <div class="rtree-dot"></div>
      <div class="rtree-card">
        <div class="rtree-node-header">
          <span class="rtree-week-tag">Week 4 &amp; 5</span>
          <span class="rtree-topic">Loops &amp; Arrays</span>
        </div>
        <div class="rtree-prereqs">
          <span class="rtree-prereq-label">Builds on:</span>
          <span class="rtree-prereq-pill">Week 2 — Functions</span>
          <span class="rtree-prereq-pill">Week 3 — Conditionals</span>
        </div>
        <p class="rtree-desc">Repeating actions with for/while loops and storing sequences of data in 1D arrays.</p>
        <div class="week-resource-links">
          <a href="{{ site.baseurl }}/notes/week-04-05/notes/"     class="week-link week-link-notes">📘 Notes</a>
          <a href="{{ site.baseurl }}/notes/week-04-05/syntax/"    class="week-link week-link-syntax">💻 Syntax</a>
          <a href="{{ site.baseurl }}/notes/week-04-05/worksheet/" class="week-link week-link-worksheet">🧩 Worksheet</a>
          <a href="{{ site.baseurl }}/notes/week-04-05/practice/"  class="week-link week-link-practice">🚀 Practice</a>
        </div>
      </div>
    </div>

    <div class="rtree-node">
      <div class="rtree-dot"></div>
      <div class="rtree-card">
        <div class="rtree-node-header">
          <span class="rtree-week-tag">Week 6</span>
          <span class="rtree-topic">More on Arrays</span>
        </div>
        <div class="rtree-prereqs">
          <span class="rtree-prereq-label">Builds on:</span>
          <span class="rtree-prereq-pill">Week 4 &amp; 5 — Loops &amp; Arrays</span>
        </div>
        <p class="rtree-desc">Searching, sorting, and advanced manipulation of array data — the tools of real programs.</p>
        <div class="week-resource-links">
          <a href="{{ site.baseurl }}/notes/week-06/notes/"     class="week-link week-link-notes">📘 Notes</a>
          <a href="{{ site.baseurl }}/notes/week-06/syntax/"    class="week-link week-link-syntax">💻 Syntax</a>
          <a href="{{ site.baseurl }}/notes/week-06/worksheet/" class="week-link week-link-worksheet">🧩 Worksheet</a>
          <a href="{{ site.baseurl }}/notes/week-06/practice/"  class="week-link week-link-practice">🚀 Practice</a>
        </div>
      </div>
    </div>
  </div>

  <!-- ── MIDTERM MILESTONE ── -->
  <div class="rtree-section rtree-milestone">
    <div class="rtree-node">
      <div class="rtree-dot rtree-dot-milestone"></div>
      <div class="rtree-card rtree-card-milestone">
        <div class="rtree-node-header">
          <span class="rtree-week-tag rtree-tag-milestone">Milestone</span>
          <span class="rtree-topic">Mockup Midterm</span>
        </div>
        <div class="rtree-prereqs">
          <span class="rtree-prereq-label">Tests:</span>
          <span class="rtree-prereq-pill">Phase 1</span>
          <span class="rtree-prereq-pill">Phase 2</span>
          <span class="rtree-prereq-pill">Phase 3</span>
        </div>
        <p class="rtree-desc">A comprehensive mock exam focusing on paper-based code tracing, output prediction, and debugging.</p>
        <div class="week-resource-links">
          <a href="{{ site.baseurl }}/notes/mockup-midterm-1/exam/" class="week-link rtree-link-milestone">Mock Exam 1</a>
          <a href="{{ site.baseurl }}/notes/mockup-midterm-1/solutions/" class="week-link rtree-link-milestone-outline">Solutions 1</a>
          <a href="{{ site.baseurl }}/notes/mockup-midterm-2/exam/" class="week-link rtree-link-milestone">Mock Exam 2</a>
          <a href="{{ site.baseurl }}/notes/mockup-midterm-2/solutions/" class="week-link rtree-link-milestone-outline">Solutions 2</a>
        </div>
      </div>
    </div>
  </div>

  <!-- ── PHASE 4 ── -->
  <div class="rtree-section rtree-p4">
    <div class="rtree-phase-header">
      <span class="rtree-phase-num">PHASE 4</span>
      <span class="rtree-phase-name">Advanced Topics</span>
      <span class="rtree-phase-goal">Master 2D data, recursive thinking, and direct memory access</span>
    </div>

    <div class="rtree-node">
      <div class="rtree-dot"></div>
      <div class="rtree-card">
        <div class="rtree-node-header">
          <span class="rtree-week-tag">Week 7 &amp; 8</span>
          <span class="rtree-topic">Nested Loops &amp; 2D Arrays</span>
        </div>
        <div class="rtree-prereqs">
          <span class="rtree-prereq-label">Builds on:</span>
          <span class="rtree-prereq-pill">Week 4 &amp; 5 — Loops &amp; Arrays</span>
          <span class="rtree-prereq-pill">Week 6 — More Arrays</span>
        </div>
        <p class="rtree-desc">Grids, matrices, and loops inside loops — the foundation for image processing and tabular data.</p>
        <div class="week-resource-links">
          <a href="{{ site.baseurl }}/notes/week-07-08/notes/"     class="week-link week-link-notes">📘 Notes</a>
          <a href="{{ site.baseurl }}/notes/week-07-08/syntax/"    class="week-link week-link-syntax">💻 Syntax</a>
          <a href="{{ site.baseurl }}/notes/week-07-08/worksheet/" class="week-link week-link-worksheet">🧩 Worksheet</a>
          <a href="{{ site.baseurl }}/notes/week-07-08/practice/"  class="week-link week-link-practice">🚀 Practice</a>
        </div>
      </div>
    </div>

    <div class="rtree-node">
      <div class="rtree-dot"></div>
      <div class="rtree-card">
        <div class="rtree-node-header">
          <span class="rtree-week-tag">Week 9</span>
          <span class="rtree-topic">Recursion</span>
        </div>
        <div class="rtree-prereqs">
          <span class="rtree-prereq-label">Builds on:</span>
          <span class="rtree-prereq-pill">Week 2 — Functions</span>
          <span class="rtree-prereq-pill">Week 4 &amp; 5 — Loops &amp; Arrays</span>
        </div>
        <p class="rtree-desc">Functions that call themselves — an elegant and powerful technique for solving problems that repeat with smaller inputs.</p>
        <div class="week-resource-links">
          <a href="{{ site.baseurl }}/notes/week-09/notes/"     class="week-link week-link-notes">📘 Notes</a>
          <a href="{{ site.baseurl }}/notes/week-09/syntax/"    class="week-link week-link-syntax">💻 Syntax</a>
          <a href="{{ site.baseurl }}/notes/week-09/worksheet/" class="week-link week-link-worksheet">🧩 Worksheet</a>
          <a href="{{ site.baseurl }}/notes/week-09/practice/"  class="week-link week-link-practice">🚀 Practice</a>
        </div>
      </div>
    </div>

    <div class="rtree-node">
      <div class="rtree-dot"></div>
      <div class="rtree-card">
        <div class="rtree-node-header">
          <span class="rtree-week-tag">Week 10</span>
          <span class="rtree-topic">Pointers</span>
        </div>
        <div class="rtree-prereqs">
          <span class="rtree-prereq-label">Builds on:</span>
          <span class="rtree-prereq-pill">Week 4 &amp; 5 — Loops &amp; Arrays</span>
          <span class="rtree-prereq-pill">Week 6 — More Arrays</span>
        </div>
        <p class="rtree-desc">Direct memory access via addresses — the most fundamental concept in systems programming and a gateway to dynamic memory.</p>
        <div class="week-resource-links">
          <a href="{{ site.baseurl }}/notes/week-10/notes/"     class="week-link week-link-notes">📘 Notes</a>
          <a href="{{ site.baseurl }}/notes/week-10/syntax/"    class="week-link week-link-syntax">💻 Syntax</a>
          <a href="{{ site.baseurl }}/notes/week-10/worksheet/" class="week-link week-link-worksheet">🧩 Worksheet</a>
          <a href="{{ site.baseurl }}/notes/week-10/practice/"  class="week-link week-link-practice">🚀 Practice</a>
        </div>
      </div>
    </div>

  </div>

  <!-- ── FINAL MILESTONE ── -->
  <div class="rtree-section rtree-milestone">
    <div class="rtree-node">
      <div class="rtree-dot rtree-dot-milestone"></div>
      <div class="rtree-card rtree-card-milestone">
        <div class="rtree-node-header">
          <span class="rtree-week-tag rtree-tag-milestone">Milestone</span>
          <span class="rtree-topic">Mockup Final</span>
        </div>
        <div class="rtree-prereqs">
          <span class="rtree-prereq-label">Tests:</span>
          <span class="rtree-prereq-pill">Entire Course (Phases 1 - 4)</span>
        </div>
        <p class="rtree-desc">The ultimate comprehensive exam covering everything from basic I/O up to Pointers and Recursion.</p>
        <div class="week-resource-links">
          <a href="{{ site.baseurl }}/notes/mockup-final-1/exam/" class="week-link rtree-link-milestone">Mock Final 1</a>
          <a href="{{ site.baseurl }}/notes/mockup-final-1/solutions/" class="week-link rtree-link-milestone-outline">Solutions 1</a>
          <a href="{{ site.baseurl }}/notes/mockup-final-2/exam/" class="week-link rtree-link-milestone">Mock Final 2</a>
          <a href="{{ site.baseurl }}/notes/mockup-final-2/solutions/" class="week-link rtree-link-milestone-outline">Solutions 2</a>
        </div>
      </div>
    </div>
  </div>

</div>
