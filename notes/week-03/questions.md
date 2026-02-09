---
layout: page
title: Week 3 Questions
parent: Week 3
nav_exclude: true
---

# Week 3 Programming Questions

> **Note:** Try to solve these questions on your own before checking the solutions.
{: .note }

## Question 1
Write a C program that prompts the user to input grades for **Arithmetic**, **Algebra**, **Geometry**, and **Data Analysis**. The program should compute the **Total Grade**, finding the area with the **Lowest Grade**.

**Example:**
```
Enter Arithmetic grade: 85
Enter Algebra grade: 90
Enter Geometry grade: 78
Enter Data Analysis grade: 88
Total Grade: 341.00
Lowest grade is: 78.00 in Geometry
```
{% include expandable-code.html title="Solution" id="sol-1" file="code/week-03/solution-01.c" %}

## Question 2
<div style="display: flex; align-items: flex-start; gap: 2rem;">
  <div style="flex: 1;">
    Write a function named `LeapYear` that receives a year (integer) and displays whether it is a Leap Year or not.
    <br><br>
    <strong>Example:</strong>
    <div class="language-plaintext highlighter-rouge"><div class="highlight"><pre class="highlight"><code>Enter year: 2024
2024 is a Leap Year
</code></pre></div></div>
  </div>
  <div style="flex: 0 0 250px;">
    <img src="{{ site.baseurl }}/assets/images/leap-year.png" alt="Leap Year Logic" style="width: 100%; border-radius: 8px; box-shadow: 0 2px 4px rgba(0,0,0,0.1);">
  </div>
</div>
{% include expandable-code.html title="Solution" id="sol-2" file="code/week-03/solution-02.c" %}

## Question 3
Write a function named `WeatherState` that receives temperature (°C) and displays a message based on the status:

*   `Temp < 0`: **Freezing weather**
*   `Temp 0 - 10`: **Very Cold weather**
*   `Temp 10 - 20`: **Cold weather**
*   `Temp 20 - 30`: **Normal in Temp**
*   `Temp 30 - 40`: **It's Hot**
*   `Temp >= 40`: **It's Very Hot**

**Example:**
```
Enter temperature: 15
Cold weather
```
{% include expandable-code.html title="Solution" id="sol-3" file="code/week-03/solution-03.c" %}

## Question 4
Write a function `TriangleType` that receives 3 integer edges and checks if the triangle is:
*   **Equilateral:** All sides equal.
*   **Isosceles:** Two sides equal.
*   **Scalene:** All sides different.

**Example:**
```
Enter 3 edges: 5 5 5
Equilateral
```
{% include expandable-code.html title="Solution" id="sol-4" file="code/week-03/solution-04.c" %}

## Question 5
Write a function `VowelTest` that checks if an input character is a **Vowel** (`a, e, i, o, u`) or **Consonant**.

**Example:**
```
Enter a character: e
e is a Vowel
```
{% include expandable-code.html title="Solution" id="sol-5" file="code/week-03/solution-05.c" %}

## Question 6
Write a function `CharTest` that checks if an input is:
*   **Alphabet** (A-Z, a-z)
*   **Digit** (0-9)
*   **Special Character** (others)

**Example:**
```
Enter character: $
Special Character
```
{% include expandable-code.html title="Solution" id="sol-6" file="code/week-03/solution-06.c" %}

## Question 7
Write a void function `printAscending` that receives 3 integers and prints them from smallest to largest.

**Example:**
```
Enter 3 numbers: 15 3 29
Numbers in Ascending Order: 3 15 29
```
{% include expandable-code.html title="Solution" id="sol-7" file="code/week-03/solution-07.c" %}

## Question 8
<div style="display: flex; align-items: flex-start; gap: 2rem;">
  <div style="flex: 1;">
    Write a menu-driven program to compute perimeter:
    <ul>
      <li>1. <strong>Circle</strong> (<code>circle_per(r)</code>)</li>
      <li>2. <strong>Rectangle</strong> (<code>rect_per(a, b)</code>)</li>
      <li>3. <strong>Triangle</strong> (<code>tri_per(a, b, c)</code>)</li>
    </ul>
    <strong>Example:</strong>
    <div class="language-plaintext highlighter-rouge"><div class="highlight"><pre class="highlight"><code>1. Circle
2. Rectangle
3. Triangle
Enter choice: 1
Enter radius: 5
Perimeter: 31.42
</code></pre></div></div>
  </div>
  <div style="flex: 0 0 350px;">
    <img src="{{ site.baseurl }}/assets/images/area-formulas.png" alt="Area Formulas" style="width: 100%; border-radius: 8px; box-shadow: 0 2px 4px rgba(0,0,0,0.1);">
  </div>
</div>
{% include expandable-code.html title="Solution" id="sol-8" file="code/week-03/solution-08.c" %}

{% include week-nav.html prev_link="/notes/week-03/syntax/" prev_title="Syntax Guide" next_link="/notes/week-03/practice/" next_title="Practice" %}
