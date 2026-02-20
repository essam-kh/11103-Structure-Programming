---
layout: page
title: Week 1 Syntax
parent: Week 1
nav_exclude: true
---

<h1 class="lang-c">C Programming Syntax Examples</h1>
<h1 class="lang-cpp">C++ Programming Syntax Examples</h1>

<p class="lang-c">This document demonstrates basic C programming syntax with examples.</p>
<p class="lang-cpp">This document demonstrates basic C++ programming syntax with examples.</p>

<div class="lang-c" markdown="1">
```c
#include <stdio.h>

int main()
{
    // Your code goes here
    return 0;
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
#include <iostream>
using namespace std;

int main()
{
    // Your code goes here
    return 0;
}
```
</div>

## Output Statements
<div class="lang-cpp" markdown="1">
### Using cout

```cpp
// Print "Hello, World!" and append a newline character at the end of the output
cout << "Hello, World!" << endl;
```

</div>
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

<div class="lang-c" markdown="1">
```c
// formatted output using printf
printf("Hello, %s! You have %.2f new messages.\n", "Alice", 5.6789);
```

Uses format specifiers:
- `%s` for strings
- `%.2f` for floats with 2 decimal places
</div>

<div class="lang-cpp" markdown="1">
```cpp
// formatted output using cout and iomanip
#include <iomanip> // required for manipulators like setprecision
// ...
cout << "Hello, " << "Alice" << "! You have " << fixed << setprecision(2) << 5.6789 << " new messages.\n";
```

Uses I/O manipulators:
- `fixed` to ensure decimal format
- `setprecision(2)` for floats with 2 decimal places
</div>

## Variables

### Declaring and Initializing Variables
<div class="lang-c" markdown="1">
```c
// declaring and initializing variables
int age = 25;
float height = 5.9;
char initial = 'A';
char initial2 = 66; // ASCII value for 'B'
printf("Age: %d, Height: %.1f, Initials: %c %c\n", age, height, initial, initial2);
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
// declaring and initializing variables
int age = 25;
float height = 5.9;
char initial = 'A';
char initial2 = 66; // ASCII value for 'B'
cout << "Age: " << age << ", Height: " << height << ", Initials: " << initial << " " << initial2 << endl;
```
</div>
Declares and initializes variables of different types: `int`, `float`, `char`.

### Constants
<div class="lang-c" markdown="1">
```c
// declaring a constant variable
const float PI = 3.14;
float radius = 2.0;
float area = PI * radius * radius;
printf("Area of circle with radius %.2f is %.2f\n", radius, area);
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
// declaring a constant variable
const float PI = 3.14;
float radius = 2.0;
float area = PI * radius * radius;
cout << "Area of circle with radius " << radius << " is " << area << endl;
```
</div>
Uses `const` to declare a constant value for PI and calculates the area of a circle.

## Input Statements
<div class="lang-cpp" markdown="1">
### Using cin

```cpp
// input statement using cin
int userAge;
cout << "Enter your age: ";
cin >> userAge;
cout << "Your age is: " << userAge << endl;
```

Reads an integer input from the user using `cin`.

</div>
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
<div class="lang-c" markdown="1">
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
</div>
<div class="lang-cpp" markdown="1">
```cpp
// arithmetic operations
int a = 10, b = 3;
cout << "Addition: " << a << " + " << b << " = " << a + b << endl;
cout << "Subtraction: " << a << " - " << b << " = " << a - b << endl;
cout << "Multiplication: " << a << " * " << b << " = " << a * b << endl;
cout << "Division: " << a << " / " << b << " = " << a / b << endl;
cout << "Modulus: " << a << " % " << b << " = " << a % b << endl;
a += 5; // equivalent to a = a + 5
cout << "After a += 5, a = " << a << endl;
b *= 2; // equivalent to b = b * 2
cout << "After b *= 2, b = " << b << endl;
```
</div>
Demonstrates basic arithmetic operators and compound assignment operators.

## Increment and Decrement Operators
<div class="lang-c" markdown="1">
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
</div>
<div class="lang-cpp" markdown="1">
```cpp
// prefix and postfix increment/decrement
int x = 5;
cout << "Initial x: " << x << endl;
cout << "Prefix increment: " << ++x << endl;                 // x becomes 6, then prints 6
cout << "Postfix increment: " << x++ << endl;                // prints 6, then x becomes 7
cout << "Value of x after postfix increment: " << x << endl; // prints 7
cout << "Prefix decrement: " << --x << endl;                 //   x becomes 6, then prints 6
cout << "Postfix decrement: " << x-- << endl;                // prints 6, then x becomes 5
cout << "Value of x after postfix decrement: " << x << endl; // prints 5
```
</div>
Shows the difference between prefix (`++x`, `--x`) and postfix (`x++`, `x--`) operators.


{% include week-nav.html prev_link="/notes/week-01/notes/" prev_title="Lecture Notes" next_link="/notes/week-01/worksheet/" next_title="Worksheet" %}