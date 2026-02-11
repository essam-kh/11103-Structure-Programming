---
layout: page
title: Week 3 Syntax
parent: Week 3
nav_exclude: true
---

# C Programming Syntax Examples - Week 3

This document demonstrates the syntax for conditional statements and logical operators in C.


## 1. Conditional Statements

### One-Way Selection (`if`)

Executes code only if the condition is true.

```c
int salary = 600;
if (salary > 500) {
    salary = salary + 100; // Bonus
}
printf("Final Salary: %d\n", salary);
```

### Two-Way Selection (`if-else`)

Executes one block if true, another if false.

```c
int number = 7;
if (number % 2 == 0) {
    printf("%d is Even\n", number);
} else {
    printf("%d is Odd\n", number);
}
```

### Multi-Way Selection (`else-if`)

Checks multiple conditions in sequence.

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

### Nested `if` Statements

An `if` statement inside another `if`.

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

## 2. Ternary Operator (`? :`)

A shorthand for `if-else`.

```c
int a = 10, b = 20;
int max;

// Syntax: (condition) ? value_if_true : value_if_false;
max = (a > b) ? a : b;

printf("Max value is: %d\n", max);
```

## 3. Switch Statement

Selects one case based on the value of an integer or character expression.

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

## 4. Logical Operators

Used to combine boolean conditions.

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

{% include week-nav.html prev_link="/notes/week-03/notes/" prev_title="Lecture Notes" next_link="/notes/week-03/worksheet/" next_title="Worksheet" %}
