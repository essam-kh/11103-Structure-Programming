---
layout: page
title: Week 3 Questions
parent: Week 3
nav_exclude: true
---

# Week 3 Programming Questions

> **Note:** Try to solve these questions on your own before checking the solutions.
{: .note }

{% include question-filters.html %}

<div class="question-card" data-question-difficulty="Medium" markdown="1">
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
{% include expandable-code.html title="Solution" id="sol-1" file_c="code/week-03/c/solution-01.c" file_cpp="code/week-03/cpp/solution-01.cpp" %}
</div>

<div class="question-card" data-question-difficulty="Medium" markdown="1">
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
    <img src="{{ site.baseurl }}/assets/images/content/leap-year.png" alt="Leap Year Logic" style="width: 100%; border-radius: 8px; box-shadow: 0 2px 4px rgba(0,0,0,0.1);">
  </div>
</div>
{% include expandable-code.html title="Solution" id="sol-2" file_c="code/week-03/c/solution-02.c" file_cpp="code/week-03/cpp/solution-02.cpp" %}
</div>

<div class="question-card" data-question-difficulty="Easy" markdown="1">
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
{% include expandable-code.html title="Solution" id="sol-3" file_c="code/week-03/c/solution-03.c" file_cpp="code/week-03/cpp/solution-03.cpp" %}
</div>

<div class="question-card" data-question-difficulty="Easy" markdown="1">
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
{% include expandable-code.html title="Solution" id="sol-4" file_c="code/week-03/c/solution-04.c" file_cpp="code/week-03/cpp/solution-04.cpp" %}
</div>

<div class="question-card" data-question-difficulty="Easy" markdown="1">
## Question 5
Write a function `VowelTest` that checks if an input character is a **Vowel** (`a, e, i, o, u`) or **Consonant**.

**Example:**
```
Enter a character: e
e is a Vowel
```
{% include expandable-code.html title="Solution" id="sol-5" file_c="code/week-03/c/solution-05.c" file_cpp="code/week-03/cpp/solution-05.cpp" %}
</div>

<div class="question-card" data-question-difficulty="Medium" markdown="1">
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
{% include expandable-code.html title="Solution" id="sol-6" file_c="code/week-03/c/solution-06.c" file_cpp="code/week-03/cpp/solution-06.cpp" %}
</div>

<div class="question-card" data-question-difficulty="Hard" markdown="1">
## Question 7
Write a void function `printAscending` that receives 3 integers and prints them from smallest to largest.

**Example:**
```
Enter 3 numbers: 15 3 29
Numbers in Ascending Order: 3 15 29
```
{% include expandable-code.html title="Solution" id="sol-7" file_c="code/week-03/c/solution-07.c" file_cpp="code/week-03/cpp/solution-07.cpp" %}
</div>

<div class="question-card" data-question-difficulty="Medium" markdown="1">
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
    <img src="{{ site.baseurl }}/assets/images/content/perimeter-formulas.png" alt="Perimeter Formulas" style="width: 100%; border-radius: 8px; box-shadow: 0 2px 4px rgba(0,0,0,0.1);">
  </div>
</div>
{% include expandable-code.html title="Solution" id="sol-8" file_c="code/week-03/c/solution-08.c" file_cpp="code/week-03/cpp/solution-08.cpp" %}
</div>

<div class="question-card" data-question-difficulty="Easy" markdown="1">
## Question 9
Trace the following program options to find which expression evaluates to `true` when $x = 5$ and $y = 10$:

A) `x > y`  
B) `x == y`  
C) `x != y && x > 0`  
D) `x >= 5 && y < 10`  

{% include expandable-code.html title="Solution" id="sol-9" file_c="code/week-03/c/solution-09.c" file_cpp="code/week-03/cpp/solution-09.cpp" %}
</div>

<div class="question-card" data-question-difficulty="Medium" markdown="1">
## Question 10
Trace the following program and determine the printed output:

```c
int number = 0;

if (number = 0) {
    printf("The number is zero.");
} else {
    printf("The number is not zero.");
}
```

> **Warning:** Note the operator used inside the `if` statement condition.
{: .warning }

{% include expandable-code.html title="Solution" id="sol-10" file_c="code/week-03/c/solution-10.c" file_cpp="code/week-03/cpp/solution-10.cpp" %}
</div>

<div class="question-card" data-question-difficulty="Hard" markdown="1">
## Question 11
Write a function `IsValidDate()` that takes `day`, `month`, and `year` as integer inputs and returns `1` (true) if the date is valid or `0` (false) if it is invalid. You must account for different month lengths and leap years (February has 29 days in a leap year).

In `main()`, prompt the user for the day, month, and year, pass them to the function, and print whether the date is valid or invalid.

**Example:**
```
Enter day, month, year: 29 2 2023
Date is Invalid
```

{% include expandable-code.html title="Solution" id="sol-11" file_c="code/week-03/c/solution-11.c" file_cpp="code/week-03/cpp/solution-11.cpp" %}
</div>

<div class="question-card" data-question-difficulty="Medium" markdown="1">
## Question 12
Write a function `PlayRPS()` that takes the player's choice as a character (`'R'`, `'P'`, or `'S'`) and generates a random computer choice. Print both choices and determine the winner (Player wins, Computer wins, or Tie).

In `main()`, prompt the user for their choice, call the function, and let the game play out.

**Example:**
```
Enter choice (R = Rock, P = Paper, S = Scissors): R
Computer chose: Scissors
Player wins!
```

{% include expandable-code.html title="Solution" id="sol-12" file_c="code/week-03/c/solution-12.c" file_cpp="code/week-03/cpp/solution-12.cpp" %}
</div>

<div class="question-card" data-question-difficulty="Medium" markdown="1">
## Question 13
Trace the following program and determine the printed output values of $x$, $y$, and $z$:

```c
int x = 5;
int y = 0;
int z = 10;

if (x > 3 || ++y > 0) {
    z += 5;
}
if (x < 3 && ++y > 0) {
    z += 10;
}
printf("x = %d, y = %d, z = %d\n", x, y, z);
```

> **Note:** Pay attention to short-circuit evaluation rules for conditional operators `||` and `&&`.
{: .note }

{% include expandable-code.html title="Solution" id="sol-13" file_c="code/week-03/c/solution-13.c" file_cpp="code/week-03/cpp/solution-13.cpp" %}
</div>

{% include week-nav.html prev_link="/notes/week-03/syntax/" prev_title="Syntax Guide" next_link="/notes/week-03/practice/" next_title="Practice" %}
