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

## Anatomy of a Recursive Function

Every valid recursive function consists of two fundamental and essential parts. Missing either of these will lead to a broken program.

1. **The Base Case (The Stopping Condition):** This is the simplest, most trivial scenario where the answer is known immediately and no further recursion is needed. It acts as the exit mechanism. Without a base case, your function will call itself infinitely.
2. **The Recursive Case (The Self-Call):** This is where the function calls itself, but critically, it must do so with a *modified* set of arguments that brings it one step closer to the base case. 

**Standard Skeleton of a Recursive Function:**

```c
return_type recursive_function(parameters) {
    if (base_condition_is_met) {
        return base_case_value; // Stop recursing
    }
    // Do some work, then recursively call the function with a step towards the base case
    return some_work + recursive_function(modified_parameters);
}
```

## How Recursion Uses Memory (The Call Stack)

When a function calls itself, how does the computer remember where it left off, or what the local variables were in previous calls? It does this using a data structure called the **Call Stack**.

*   Every time a function is called, a new chunk of memory called a "Stack Frame" is created and placed on top of the stack. This frame stores the function's local variables, parameters, and the return address.
*   The computer pauses the current function and begins executing the new function at the top of the stack.
*   When a base case is reached and a function completes, its stack frame is destroyed (popped off the stack), and the computer resumes the function right below it using the returned value.

> **Stack Overflow**: The stack has a limited amount of memory. If the recursion goes too deep (e.g., infinite recursion due to a missing base case) or if the problem size is simply too large, the memory runs out. This causes a **Stack Overflow** error, which usually results in an immediate program crash (Segmentation Fault).
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
<video controls style="width: 100%; border-radius: 8px; box-shadow: 0 4px 6px -1px rgba(0,0,0,0.1);">
  <source src="{{ site.baseurl }}/assets/videos/fib-steps.mp4" type="video/mp4">
  Your browser does not support the video tag.
</video>

---

## Recursion vs Iteration

Both recursion and iteration can be used to solve the same repetition-based problems, but they do it in fundamentally different ways.

| Feature | Iteration | Recursion |
| :--- | :--- | :--- |
| **Repetition Method** | Uses explicit loops (`for`, `while`, `do-while`). | Uses repeated function self-calls. |
| **Termination** | Stops when the loop condition evaluates to false. | Stops when the base case is reached. |
| **State Tracking** | Uses variables to track the current state (e.g., counters). | Uses the Call Stack to track the state across multiple function calls. |
| **Memory Usage** | Minimal, as it reuses the same variables. | High, as each recursive call adds a new frame to the Call Stack. |

> **Tip**: As a general rule: If a problem can be easily solved with a simple `while` or `for` loop, you should use iteration. If dividing the problem into smaller identical pieces makes it significantly simpler, use recursion!
{: .tip }
<br>

{% include week-nav.html next_link="/notes/week-09/syntax/" next_title="Syntax Guide" %}
