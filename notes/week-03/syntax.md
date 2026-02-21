---
layout: page
title: Week 3 Syntax
parent: Week 3
nav_exclude: true
---

# <span class="lang-c">C</span><span class="lang-cpp">C++</span> Programming Syntax Examples - Week 3

This document demonstrates the syntax for conditional statements and logical operators in <span class="lang-c">C</span><span class="lang-cpp">C++</span>.


## 1. Conditional Statements

### One-Way Selection (`if`)

Executes code only if the condition is true.

<div class="lang-c" markdown="1">
```c
int salary = 600;
if (salary > 500) {
    salary = salary + 100; // Bonus
}
printf("Final Salary: %d\n", salary);
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
#include <iostream>
using namespace std;

int salary = 600;
if (salary > 500) {
    salary = salary + 100; // Bonus
}
cout << "Final Salary: " << salary << endl;
```
</div>

### Two-Way Selection (`if-else`)

Executes one block if true, another if false.

<div class="lang-c" markdown="1">
```c
int number = 7;
if (number % 2 == 0) {
    printf("%d is Even\n", number);
} else {
    printf("%d is Odd\n", number);
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
int number = 7;
if (number % 2 == 0) {
    cout << number << " is Even" << endl;
} else {
    cout << number << " is Odd" << endl;
}
```
</div>

### Multi-Way Selection (`else-if`)

Checks multiple conditions in sequence.

<div class="lang-c" markdown="1">
```c
int num = 0;
if (num > 0) {
    printf("Positive\n");
} else if (num < 0) {
    printf("Negative\n");
} else {
    printf("Zero\n");
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
int num = 0;
if (num > 0) {
    cout << "Positive" << endl;
} else if (num < 0) {
    cout << "Negative" << endl;
} else {
    cout << "Zero" << endl;
}
```
</div>

### Nested `if` Statements

An `if` statement inside another `if`.

<div class="lang-c" markdown="1">
```c
int age = 20;
int hasID = 1; // 1 means true

if (age >= 18) {
    if (hasID == 1) {
        printf("Access Granted\n");
    } else {
        printf("ID Required\n");
    }
} else {
    printf("Access Denied\n");
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
int age = 20;
int hasID = 1; // 1 means true

if (age >= 18) {
    if (hasID == 1) {
        cout << "Access Granted" << endl;
    } else {
        cout << "ID Required" << endl;
    }
} else {
    cout << "Access Denied" << endl;
}
```
</div>

## 2. Ternary Operator (`? :`)

A shorthand for `if-else`.

<div class="lang-c" markdown="1">
```c
int a = 10, b = 20;
int max;

// Syntax: (condition) ? value_if_true : value_if_false;
max = (a > b) ? a : b;

printf("Max value is: %d\n", max);
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
int a = 10, b = 20;
int max;

// Syntax: (condition) ? value_if_true : value_if_false;
max = (a > b) ? a : b;

cout << "Max value is: " << max << endl;
```
</div>

## 3. Switch Statement

Selects one case based on the value of an integer or character expression.

<div class="lang-c" markdown="1">
```c
int day = 3;

switch (day) {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    default:
        printf("Other Day\n");
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
int day = 3;

switch (day) {
    case 1:
        cout << "Sunday" << endl;
        break;
    case 2:
        cout << "Monday" << endl;
        break;
    case 3:
        cout << "Tuesday" << endl;
        break;
    default:
        cout << "Other Day" << endl;
}
```
</div>

## 4. Logical Operators

Used to combine boolean conditions.

<div class="lang-c" markdown="1">
```c
int age = 25;
int experience = 3;

// AND (&&): Both must be true
if (age > 20 && experience > 2) {
    printf("Hired!\n");
}

// OR (||): At least one must be true
int score = 45;
if (score < 50 || score > 100) {
    printf("Invalid Score\n");
}

// NOT (!): Reverses the condition
int isLightOn = 0; // 0 means false
if (!isLightOn) {
    printf("The light is OFF\n");
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
int age = 25;
int experience = 3;

// AND (&&): Both must be true
if (age > 20 && experience > 2) {
    cout << "Hired!" << endl;
}

// OR (||): At least one must be true
int score = 45;
if (score < 50 || score > 100) {
    cout << "Invalid Score" << endl;
}

// NOT (!): Reverses the condition
int isLightOn = 0; // 0 means false
if (!isLightOn) {
    cout << "The light is OFF" << endl;
}
```
</div>

{% include week-nav.html prev_link="/notes/week-03/notes/" prev_title="Lecture Notes" next_link="/notes/week-03/worksheet/" next_title="Worksheet" %}
