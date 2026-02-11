---
layout: page
title: Week 1 Syntax
parent: Week 1
nav_exclude: true
---

# C Programming Syntax Examples

This document demonstrates basic C programming syntax with examples.

```c
#include <stdio.h>

int main()
{
    // Your code goes here
    return 0;
}
```

## Output Statements

### Using printf

```c
// Print "Hello, World!" and append a newline character at the end of the output
printf("Hello, World!\n");
```

This prints "Hello, World!" followed by a newline.

### Using puts

```c
// Print "Hello, World!" and append a newline character at the end of the output
puts("Hello, World!");
```

`puts` automatically appends a newline after printing the string.

### Formatted Output

```c
// formatted output using printf
printf("Hello, %s! You have %.2f new messages.\n", "Alice", 5.6789);
```

Uses format specifiers:
- `%s` for strings
- `%.2f` for floats with 2 decimal places

## Variables

### Declaring and Initializing Variables

```c
// declaring and initializing variables
int age = 25;
float height = 5.9;
char initial = 'A';
char initial2 = 66; // ASCII value for 'B'
printf("Age: %d, Height: %.1f, Initials: %c %c\n", age, height, initial, initial2);
```

Declares and initializes variables of different types: `int`, `float`, `char`.

### Constants

```c
// declaring a constant variable
const float PI = 3.14;
float radius = 2.0;
float area = PI * radius * radius;
printf("Area of circle with radius %.2f is %.2f\n", radius, area);
```

Uses `const` to declare a constant value for PI and calculates the area of a circle.

## Input Statements

### Using scanf

```c
// input statement using scanf
int userAge;
printf("Enter your age: ");
scanf("%d", &userAge);
printf("Your age is: %d\n", userAge);
```

Reads an integer input from the user using `scanf`.

## Arithmetic Operations

```c
// arithmetic operations
int a = 10, b = 3;
printf("Addition: %d + %d = %d\n", a, b, a + b);
printf("Subtraction: %d - %d = %d\n", a, b, a - b);
printf("Multiplication: %d * %d = %d\n", a, b, a * b);
printf("Division: %d / %d = %d\n", a, b, a / b);
printf("Modulus: %d %% %d = %d\n", a, b, a % b);
a += 5; // equivalent to a = a + 5
printf("After a += 5, a = %d\n", a);
b *= 2; // equivalent to b = b * 2
printf("After b *= 2, b = %d\n", b);
```

Demonstrates basic arithmetic operators and compound assignment operators.

## Increment and Decrement Operators

```c
// prefix and postfix increment/decrement
int x = 5;
printf("Initial x: %d\n", x);
printf("Prefix increment: %d\n", ++x);                 // x becomes 6, then prints 6
printf("Postfix increment: %d\n", x++);                // prints 6, then x becomes 7
printf("Value of x after postfix increment: %d\n", x); // prints 7
printf("Prefix decrement: %d\n", --x);                 //   x becomes 6, then prints 6
printf("Postfix decrement: %d\n", x--);                // prints 6, then x becomes 5
printf("Value of x after postfix decrement: %d\n", x); // prints 5
```

Shows the difference between prefix (`++x`, `--x`) and postfix (`x++`, `x--`) operators.


{% include week-nav.html prev_link="/notes/week-01/notes/" prev_title="Lecture Notes" next_link="/notes/week-01/worksheet/" next_title="Worksheet" %}