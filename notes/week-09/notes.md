---
layout: page
title: Week 9 Notes
parent: Week 9
nav_exclude: true
---

# Structured Programming - Week 9 Notes

## Introduction to Recursion

<div style="display: flex; gap: 2rem; align-items: flex-start; margin-bottom: 2rem;">
  <div style="flex: 1;">
    While loops allow a program to repeat a task by checking a condition, <strong>Recursion</strong> allows a function to repeat a task by calling <strong>itself</strong>. Imagine standing between two mirrors and seeing your reflection repeating infinitely—this is the visual essence of recursion. In programming, it is a powerful technique where a complex problem is solved by breaking it down into smaller, self-similar versions of the same problem, until it reaches a simple "base case" that stops the cycle.
</div>
<img src="{{ site.baseurl }}/assets/images/content/recursion.png" alt="Recursion Visualization" style="max-width: 350px; width: 100%; border-radius: 8px; box-shadow: 0 4px 6px -1px rgba(0, 0, 0, 0.1); flex-shrink: 0;">
</div>

### Steps to Implement Recursion

1. **Define a base case**: Identify the simplest (or base) case for which the solution is known or trivial. This is the stopping condition for the recursion, as it prevents the function from infinitely calling itself.
2. **Define a recursive case**: Define the problem in terms of smaller subproblems. Break the problem down into smaller versions of itself, and call the function recursively to solve each subproblem.
3. **Ensure the recursion terminates**: Make sure that the recursive function eventually reaches the base case, and does not enter an infinite loop.
4. **Combine the solutions**: Combine the solutions of the subproblems to solve the original problem.

> **Stack Overflow**: Each recursive call consumes memory on the **stack** to store variables and return addresses. If the recursion goes too deep (e.g., infinite recursion due to a missing base case) or if the problem size is too large, the stack memory runs out. This causes a **Stack Overflow** error, often leading to a program crash (Segmentation Fault).
{: .warning }


---

## Examples

### Example 1: Calculating Sum of N

This function calculates the sum of all natural numbers up to `n` recursively.

```c
int sum(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sum(n - 1); 
}
```

#### Visualizing the Recursion Stack

Let's trace `sum(3)` step-by-step to see how the stack frames are built and resolved.

{% assign sum_images = "" | split: "" %}
{% for file in site.static_files %}
  {% if file.path contains "assets/images/content/sum-steps" %}
    {% if file.extname == ".png" or file.extname == ".jpg" %}
      {% assign sum_images = sum_images | push: file %}
    {% endif %}
  {% endif %}
{% endfor %}

{% include img-slider.html id="sum" images=sum_images %}

---

### Example 2: Fibonacci Sequence

This function calculates the `n`-th Fibonacci number.

```c
int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
```

#### Visualizing the Recursion Tree

Trace of `fib(5)` calls:

{% assign fib_images = "" | split: "" %}
{% for file in site.static_files %}
  {% if file.path contains "assets/images/content/fib-steps" %}
    {% if file.extname == ".png" or file.extname == ".jpg" %}
      {% assign fib_images = fib_images | push: file %}
    {% endif %}
  {% endif %}
{% endfor %}

{% include img-slider.html id="fib" images=fib_images bg_color="#fff" img_style="width: 100%;" %}

---

## Recursion vs Iteration

| Feature | Iteration | Recursion |
| :--- | :--- | :--- |
| **Repetition** | Explicit loop | Repeated function calls |
| **Termination** | Loop condition fails | Base case recognized |
| **Infinite Loops** | Possible | Possible |
| **Balance** | Performance | Good software engineering |

<br>

{% include week-nav.html next_link="/notes/week-09/syntax/" next_title="Syntax Guide" %}
