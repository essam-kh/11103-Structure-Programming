---
layout: page
title: Week 1 Worksheet
parent: Week 1
nav_exclude: true
---

# Week 1 Programming Questions

> **Note:** Try to solve these questions on your own before checking the solutions.
{: .note }

{% include question-filters.html %}

<div class="question-card" data-question-difficulty="Easy" markdown="1">
## Question 1
Write a program that takes two integers as input from the user and performs the following operations:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus

The program should then print the results of each operation in a formatted manner.

> **Note**: The solution does not handle division by zero as conditional statements have not been covered yet.
{: .warning }

**Example:**
```
Enter first integer: 10
Enter second integer: 3
Addition: 10 + 3 = 13
Subtraction: 10 - 3 = 7
Multiplication: 10 * 3 = 30
Division: 10 / 3 = 3
Modulus: 10 % 3 = 1
```

{% include expandable-code.html title="Solution" id="sol-1" file_c="code/week-01/c/solution-01.c" file_cpp="code/week-01/cpp/solution-01.cpp" %}
</div>

<div class="question-card" data-question-difficulty="Easy" markdown="1">
## Question 2
Write a program that takes a character input from the user, an integer input, and a float input. The program should then print the ASCII value of the character, the square of the integer, and the cube of the float in a formatted manner.

**Example:**
```
Enter a character: A
Enter an integer: 4
Enter a float: 2.5
The ASCII value of 'A' is 65
The square of 4 is 16
The cube of 2.50 is 15.62
```

{% include expandable-code.html title="Solution" id="sol-2" file_c="code/week-01/c/solution-02.c" file_cpp="code/week-01/cpp/solution-02.cpp" %}
</div>


<div class="question-card" data-question-difficulty="Medium" markdown="1">
## Question 3
Write a program that reads a 4-digit integer and prints the decimal value for each digit.

**Example:**
```
please enter number of 4 digits
5678
5678=5000+600+70+8
```

{% include expandable-code.html title="Solution" id="sol-3" file_c="code/week-01/c/solution-03.c" file_cpp="code/week-01/cpp/solution-03.cpp" %}
</div>

<div class="question-card" data-question-difficulty="Medium" markdown="1">
## Question 4
Write a program that reads a date (year, month, and day) and calculates the total number of days from year 0 up to that date.
> **Note:** Assume a year has 360 days and a month has 30 days.
{: .note }

**Example:**
```
Enter the year: 2023
Enter the month (1-12): 1
Enter the day (1-31): 25
Total number of days from year 0 is: 728305
```

{% include expandable-code.html title="Solution" id="sol-4" file_c="code/week-01/c/solution-04.c" file_cpp="code/week-01/cpp/solution-04.cpp" %}
</div>



<div class="question-card" data-question-difficulty="Medium" markdown="1">
## Question 5
Write a program that takes three integers as input, calculates their average, and prints the result as a float with 2 decimal places.

**Example:**
```
Enter the first integer: 10
Enter the second integer: 20
Enter the third integer: 34
The average is: 21.33
```

{% include expandable-code.html title="Solution" id="sol-5" file_c="code/week-01/c/solution-05.c" file_cpp="code/week-01/cpp/solution-05.cpp" %}
</div>

<div class="question-card" data-question-difficulty="Hard" markdown="1">
## Question 6
Write a program that takes an integer representing an amount of money in dollars input from the user and breaks it down into the minimum number of bills of $100, $20, $5, and $1.


**Example:**
```
Enter amount in dollars: 288
$100 bills: 2
$20 bills: 4
$5 bills: 1
$1 bills: 3
```

{% include expandable-code.html title="Solution" id="sol-6" file_c="code/week-01/c/solution-06.c" file_cpp="code/week-01/cpp/solution-06.cpp" %}
</div>

<div class="question-card" data-question-difficulty="Hard" markdown="1">
## Question 7
Write a program that takes a positive floating-point number input from the user and rounds it to the nearest integer.

> **Note:** You are not allowed to use any functions from `<math.h>` (like `round()`, `floor()`, `ceil()`) or conditional statements.
{: .note }

**Example:**
```
Enter a floating-point number: 5.5
Rounded value: 6
```

{% include expandable-code.html title="Solution" id="sol-7" file_c="code/week-01/c/solution-07.c" file_cpp="code/week-01/cpp/solution-07.cpp" %}
</div>

<div class="question-card" data-question-difficulty="Medium" markdown="1">
## Question 8
Write a program that reads two integers from the user into two variables, swaps their values without using any additional or temporary variables, and prints the swapped values.

**Example:**
```
Enter first integer (A): 10
Enter second integer (B): 20
After swapping: A = 20, B = 10
```

{% include expandable-code.html title="Solution" id="sol-8" file_c="code/week-01/c/solution-08.c" file_cpp="code/week-01/cpp/solution-08.cpp" %}
</div>

{% include week-nav.html prev_link="/notes/week-01/syntax/" prev_title="Syntax Guide" next_link="/notes/week-01/practice/" next_title="Practice" %}