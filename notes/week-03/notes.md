---
layout: page
title: Week 3 Notes
parent: Week 3
nav_exclude: true
---

# Structured Programming - Week 3 Notes

## Introduction to Conditional Statements

The real power of programming lies in the ability to make decisions and alter the flow of execution based on data. Instead of executing every line in sequential order, a program can choose different paths depending on the situation. This logic is implemented using **conditional statements** (or **selection structures**) in C.

<div style="text-align: center; margin: 2rem 0;">
  <img src="{{ site.baseurl }}/assets/images/control-structure.png" alt="Control Structure" style="max-width: 600px; width: 100%; border-radius: 8px; box-shadow: 0 4px 6px -1px rgba(0, 0, 0, 0.1);">
</div>

## 1. One-Way Selection 

By default, the scope of an `if` statement is only the single following statement.

```c
if (condition)
    statement1;
statement2;
statement3;
```
*Here, only `statement1` is controlled by the `if` condition.*

To control multiple statements, you **must** use curly braces `{ }` to create a block:

```c
if (condition) {
    statement1;
    statement2;
    statement3;
}
```
*Here, all statements inside the braces are controlled by the `if` condition.*

### Example: Passing Grade

<div style="display: flex; align-items: flex-start; gap: 2rem; margin-bottom: 2rem;">
  <div style="flex: 1;">
    <strong>Incorrect Logic (Without Braces)</strong>
    <div class="language-c highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="k">if</span> <span class="p">(</span><span class="n">grade</span> <span class="o">&gt;=</span> <span class="mi">60</span><span class="p">)</span>
    <span class="n">printf</span><span class="p">(</span><span class="s">"Passed\n"</span><span class="p">);</span>
    <span class="n">printf</span><span class="p">(</span><span class="s">"Next level unlocked\n"</span><span class="p">);</span>
<span class="c1">// Always printed</span>
</code></pre></div></div>
  </div>
  <div style="flex: 1;">
    <strong>Correct Logic (With Braces)</strong>
    <div class="language-c highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="k">if</span> <span class="p">(</span><span class="n">grade</span> <span class="o">&gt;=</span> <span class="mi">60</span><span class="p">)</span> <span class="p">{</span>
    <span class="n">printf</span><span class="p">(</span><span class="s">"Passed\n"</span><span class="p">);</span>
    <span class="n">printf</span><span class="p">(</span><span class="s">"Next level unlocked\n"</span><span class="p">);</span>
<span class="p">}</span>
</code></pre></div></div>
  </div>
</div>

> **Best Practice**:
> 1. Always use indentation for readability.
> 2. Always use curly braces `{ }` even for single statements to avoid future errors.
{: .tip }

### Decision Maker

The expression inside the `if` statement is the **decision maker**.

**Evaluation Rules:**
*   **Zero** = **False**
*   **Non-zero** = **True**

**Examples:**
*   `3 - 4` evaluates to `-1` → **True**
*   `(55 - 50) * 0` evaluates to `0` → **False**

### Flowchart vs Pseudocode vs Code

<div style="display: flex; align-items: flex-start; gap: 2rem; margin: 2rem 0;">
  <div style="flex: 1;">
    <strong>Pseudocode</strong>
    <div class="language-plaintext highlighter-rouge"><div class="highlight"><pre class="highlight"><code>IF grade >= 60 THEN
  PRINT "Passed"
ENDIF
</code></pre></div></div>
  </div>
  
  <div style="flex: 1;">
    <strong>C Code</strong>
    <div class="language-c highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="k">if</span> <span class="p">(</span><span class="n">grade</span> <span class="o">&gt;=</span> <span class="mi">60</span><span class="p">)</span> <span class="p">{</span>
    <span class="n">printf</span><span class="p">(</span><span class="s">"Passed\n"</span><span class="p">);</span>
<span class="p">}</span>
</code></pre></div></div>
  </div>
</div>

## 2. Relational Operators

Relational operators are used to compare two values.

<img src="{{ site.baseurl }}/assets/images/relational-operator.png" alt="Relational Operators" style="max-width: 600px; width: 100%; border-radius: 8px; box-shadow: 0 2px 4px rgba(0,0,0,0.1);">

## 3. Two-Way Selection

This structure allows you to execute one block of code if the condition is true, and a *different* block if it is false.

```c
if (expression) {
    // Block executed if expression is true
} else {
    // Block executed if expression is false
}
```

### Flowchart vs Pseudocode vs Code

<div style="display: flex; align-items: flex-start; gap: 2rem; margin: 2rem 0;">
  <div style="flex: 1;">
    <strong>Pseudocode</strong>
    <div class="language-plaintext highlighter-rouge"><div class="highlight"><pre class="highlight"><code>IF grade >= 60 THEN
  PRINT "Passed"
ELSE
  PRINT "Failed"
ENDIF
</code></pre></div></div>
  </div>
  
  <div style="flex: 1;">
    <strong>C Code</strong>
    <div class="language-c highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="k">if</span> <span class="p">(</span><span class="n">grade</span> <span class="o">&gt;=</span> <span class="mi">60</span><span class="p">)</span> <span class="p">{</span>
    <span class="n">printf</span><span class="p">(</span><span class="s">"Passed\n"</span><span class="p">);</span>
<span class="p">}</span> <span class="k">else</span> <span class="p">{</span>
    <span class="n">printf</span><span class="p">(</span><span class="s">"Failed\n"</span><span class="p">);</span>
<span class="p">}</span>
</code></pre></div></div>
  </div>
</div>

## 4. Ternary Operator

The ternary operator is a shorthand for `if...else`. It has three parts:
`condition ? value_if_true : value_if_false`

### Example
```c
// Using if-else
if (a > b)
    max = a;
else
    max = b;

// Using ternary operator
max = (a > b) ? a : b;
```

## 5. Logical Operators

Used to combine multiple conditions.

| Operator | Name | Description | Example |
| :---: | :--- | :--- | :--- |
| `&&` | **AND** | Both conditions must be true. | `(x > 5) && (y < 10)` |
| `||` | **OR** | At least one condition must be true. | `(age < 5) \|\| (age > 65)` |
| `!` | **NOT** | Reverses the truth value. | `!(x == 0)` |

### Truth Tables

<div style="display: flex; gap: 0.5rem; font-size: 0.6em; width: 100%; align-items: center;">
  <div style="flex: 1 1 0px; min-width: 0; display: flex; flex-direction: column;">
    <table class="table table-bordered" style="margin-top: 0.25rem; width: 100%; flex: 1; text-align: center; table-layout: fixed;">
      <thead><tr><th style="padding: 0.1rem 0.25rem;">A</th><th style="padding: 0.1rem 0.25rem;">B</th><th style="padding: 0.1rem 0.25rem;">A && B</th></tr></thead>
      <tbody>
        <tr><td style="padding: 0.1rem 0.25rem;">T</td><td style="padding: 0.1rem 0.25rem;">T</td><td style="padding: 0.1rem 0.25rem;">T</td></tr>
        <tr><td style="padding: 0.1rem 0.25rem;">T</td><td style="padding: 0.1rem 0.25rem;">F</td><td style="padding: 0.1rem 0.25rem;">F</td></tr>
        <tr><td style="padding: 0.1rem 0.25rem;">F</td><td style="padding: 0.1rem 0.25rem;">T</td><td style="padding: 0.1rem 0.25rem;">F</td></tr>
        <tr><td style="padding: 0.1rem 0.25rem;">F</td><td style="padding: 0.1rem 0.25rem;">F</td><td style="padding: 0.1rem 0.25rem;">F</td></tr>
      </tbody>
    </table>
  </div>

  <div style="flex: 1 1 0px; min-width: 0; display: flex; flex-direction: column;">
    <table class="table table-bordered" style="margin-top: 0.25rem; width: 100%; flex: 1; text-align: center; table-layout: fixed;">
      <thead><tr><th style="padding: 0.1rem 0.25rem;">A</th><th style="padding: 0.1rem 0.25rem;">B</th><th style="padding: 0.1rem 0.25rem;">A || B</th></tr></thead>
      <tbody>
        <tr><td style="padding: 0.1rem 0.25rem;">T</td><td style="padding: 0.1rem 0.25rem;">T</td><td style="padding: 0.1rem 0.25rem;">T</td></tr>
        <tr><td style="padding: 0.1rem 0.25rem;">T</td><td style="padding: 0.1rem 0.25rem;">F</td><td style="padding: 0.1rem 0.25rem;">T</td></tr>
        <tr><td style="padding: 0.1rem 0.25rem;">F</td><td style="padding: 0.1rem 0.25rem;">T</td><td style="padding: 0.1rem 0.25rem;">T</td></tr>
        <tr><td style="padding: 0.1rem 0.25rem;">F</td><td style="padding: 0.1rem 0.25rem;">F</td><td style="padding: 0.1rem 0.25rem;">F</td></tr>
      </tbody>
    </table>
  </div>
  
  <div style="flex: 1 1 0px; min-width: 0; display: flex; flex-direction: column;">
    <table class="table table-bordered" style="margin-top: 0.25rem; width: 100%; flex: 1; text-align: center; table-layout: fixed;">
      <thead><tr><th style="padding: 0.1rem 0.25rem;">A</th><th style="padding: 0.1rem 0.25rem;">!A</th></tr></thead>
      <tbody>
        <tr><td style="padding: 0.1rem 0.25rem;">T</td><td style="padding: 0.1rem 0.25rem;">F</td></tr>
        <tr><td style="padding: 0.1rem 0.25rem;">F</td><td style="padding: 0.1rem 0.25rem;">T</td></tr>
      </tbody>
    </table>
  </div>
</div>

## 6. Nested Conditional Statements

You can place an `if` statement inside another `if` statement.

```c
if (condition1) {
    if (condition2) {
        // Statements executed specific to inner if
    }
}
```
> **Rule:** An `else` is associated with the *most recent* `if` that has not been paired with an `else`.
{: .note }

### `else if` Ladder

```c
if (score >= 90) {
    printf("A");
} else if (score >= 80) {
    printf("B");
} else if (score >= 70) {
    printf("C");
} else {
    printf("F");
}
```

## 7. Switch Structure

The `switch` statement is an alternative to nested `if...else` when comparing a single variable against multiple integer or character constants.

> *   **Expression Type:** Must be `int` or `char`.
> *   **Break:** Required to exit the switch block. If omitted, execution "falls through" to the next case.
> *   **Default:** Optional. Executed if no cases match.
{: .note }

### Example: Switch Syntax

<div style="display: flex; align-items: flex-start; gap: 2rem; margin-bottom: 2rem;">
  <div style="flex: 1;">
    <strong>With Break</strong>
    <div class="language-c highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="k">switch</span> <span class="p">(</span><span class="n">x</span><span class="p">)</span> <span class="p">{</span>
    <span class="k">case</span> <span class="mi">1</span><span class="p">:</span>
        <span class="n">printf</span><span class="p">(</span><span class="s">"One"</span><span class="p">);</span>
        <span class="k">break</span><span class="p">;</span>
    <span class="k">case</span> <span class="mi">2</span><span class="p">:</span>
        <span class="n">printf</span><span class="p">(</span><span class="s">"Two"</span><span class="p">);</span>
        <span class="k">break</span><span class="p">;</span>
    <span class="k">default</span><span class="p">:</span>
        <span class="n">printf</span><span class="p">(</span><span class="s">"Other"</span><span class="p">);</span>
<span class="p">}</span>
</code></pre></div></div>
  </div>
  <div style="flex: 1;">
    <strong>Without Break</strong>
    <div class="language-c highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="k">switch</span> <span class="p">(</span><span class="n">x</span><span class="p">)</span> <span class="p">{</span>
    <span class="k">case</span> <span class="mi">1</span><span class="p">:</span>
        <span class="n">printf</span><span class="p">(</span><span class="s">"One"</span><span class="p">);</span>
    <span class="k">case</span> <span class="mi">2</span><span class="p">:</span>
        <span class="n">printf</span><span class="p">(</span><span class="s">"Two"</span><span class="p">);</span>
        <span class="c1">// Prints "OneTwo" if x is 1</span>
    <span class="k">default</span><span class="p">:</span>
        <span class="n">printf</span><span class="p">(</span><span class="s">"Other"</span><span class="p">);</span>
<span class="p">}</span>
</code></pre></div></div>
  </div>
</div>

### Multiple Cases for One Action

You can stack cases to perform the same action for multiple values.

```c
switch (grade) {
    case 'A':
    case 'a':
        printf("Excellent!");
        break;
    case 'B':
    case 'b':
        printf("Good job");
        break;
    default:
        printf("Keep trying");
}
```

### Grade Example: `if-else` vs `switch`

This example compares checking a single variable `val` against specific values (90, 80, 70) using both `if-else` and `switch`.

**Using `if-else`**
```c
if (val == 90)
    printf("A");
else if (val == 80)
    printf("B");
else if (val == 70)
    printf("C");
else
    printf("F");
```

**Using `switch`**
```c
switch (val) {
    case 90:
        printf("A");
        break;
    case 80:
        printf("B");
        break;
    case 70:
        printf("C");
        break;
    default:
        printf("F");
}
```


{% include week-nav.html next_link="/notes/week-03/syntax/" next_title="Syntax Guide" %}
