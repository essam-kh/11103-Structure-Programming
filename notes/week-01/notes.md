---
layout: page
title: Week 1 Notes
parent: Week 1
nav_exclude: true
---

# Structured Programming - Week 1 Notes

## Program Structure
Your program typically follows this pattern:

<div style="display: flex; align-items: center; gap: 4rem; margin: 2rem 0;">
  <div style="font-size: 1.1em;">
    <ul>
      <li>Receive inputs</li>
      <li>Process the inputs</li>
      <li>Produce outputs</li>
    </ul>
  </div>

<img src="{{ site.baseurl }}/assets/images/program-process.png" alt="Program Process" style="max-width: 450px; width: 100%; height: auto; border-radius: 8px; box-shadow: 0 4px 6px -1px rgba(0, 0, 0, 0.1);">
</div>

## A Simple Program in C

Here is a simple C program that prints "Welcome To PSUT" to the screen:

```c
#include <stdio.h>
int main() {
    printf("Welcome To PSUT\n");
    return 0;
}
```

### Explanation

-   `#include <stdio.h>`: This line tells the compiler to include the **Standard Input Output** library. This library contains the definitions for functions like `printf/scanf` that we use to output/input text.
-   `int main()`: This is the **main function** where the program execution begins. Every C program must have exactly one main function.
-   `{ ... }`: The curly braces define the **scope** or body of the function. All the code for the `main` function lives inside these braces.
-   `printf("Welcome To PSUT\n");`: This function prints the text "Welcome To PSUT" to the screen.
-   `return 0;`: This statement terminates the `main` function and returns the value `0` to the operating system. A return value of `0` generally signifies that the program executed successfully.

## Output Statements in C

### Simple Output with `puts()`
- Used for simple string output with no formatting
- Automatically appends a newline at the end
- Can only print strings

Example:
```c
puts("Hello and welcome to C class");
```

### Formatted Output with `printf()`
- Allows formatted output and supports multiple data types

Example:
```c
printf("Hello and welcome to C class");
```

## Variables

### What is a Variable?
A variable is a named memory location that stores a value. Each variable has:

<div style="display: flex; align-items: center; gap: 4rem; margin: 2rem 0;">
  <div style="font-size: 1.1em;">
    <ul>
      <li>Name</li>
      <li>Data (value)</li>
      <li>Address (memory location)</li>
    </ul>
  </div>

<img src="{{ site.baseurl }}/assets/images/memory.png" alt="Variables in Memory" style="max-width: 450px; width: 100%; height: auto; border-radius: 8px; box-shadow: 0 4px 6px -1px rgba(0, 0, 0, 0.1);">
</div>

### Data Types
Common data types in C:
1. `int`: Whole numbers without fractions (e.g., 34, 0, -1, 159)
2. `long int`: Larger whole numbers (e.g., 9000000L)
3. `char`: Single characters (e.g., 's', 'A', '#', '+', '8')
4. `float`: Real numbers with decimals (e.g., 2.0, -137.42, 0.0001)
5. `double`: High-precision real numbers (e.g., 3.1415926535)

### Declaring Variables
To declare a variable, specify the data type followed by the variable name:
- `int number;`
- `char grade;`
- `float weight;`

Variables can be:
- Declared: `char grade;`
- Initialized: `weight = 65.7;`
- Both: `int number = 10;`

### Naming Rules
Rules for variable names:
1. Can contain alphanumeric characters and underscores
2. No special characters (except underscore)
3. Cannot start with a number
4. Cannot be a reserved word (e.g., printf, scanf, return)
5. Must be unique within the same scope

**Valid examples:**
- `A2test3`
- `_A`
- `student_name`
- `EmployeeSalary`
- `ahmad`

**Invalid examples:**
- `2A` (starts with number)
- `#A` (special character)
- `student name` (space)
- `Employee-Salary` (hyphen)
- `if` (reserved word)

### Constant Variables
- Store a value that cannot be changed after assignment
- Must be assigned at declaration time
- Use `const` before the data type

Examples:
```c
const int MAX_GRADE = 100;
const float PI = 3.14;
```

## Input Statements in C

### `scanf()` Function
The `scanf()` function allows user input to be stored in variables.

For an integer variable named `age`:
```c
scanf("%d", &age);
```
- `%d`: Format specifier for integers
- `&age`: Address-of operator to store the value in the correct memory location

### Format Specifiers
Format specifiers act as **placeholders** inside the string. They tell the function (`printf` or `scanf`) exactly what type of data to process.

- `%d`: **Decimal Integer** - Tells the function to print or read a whole number (e.g., `10`, `-5`).
- `%f`: **Float** - Prints a real number. By default, it prints 6 decimal places (e.g., `3.140000`).
- `%c`: **Character** - Prints or reads a single character (e.g., `'A'`).
- `%s`: **String** - Prints or reads a text string (e.g., `"Hello"`).

## Formatting Output

The `printf()` function supports various formatting options:

### Basic Formatting
```c
printf("I'm %s, my fav number is %d, and I got %.2f in structured programming!", "Essam", 7, 95.5000);
// Output: I'm Essam, my fav number is 7, and I got 95.50 in structured programming!
```

### Width and Precision
```c
printf("Decimals: %d\n", 1977);
// Output: Decimals: 1977

printf("Preceding with blanks: %10d\n", 1977);
// Output: Preceding with blanks:       1977

printf("Preceding with zeros: %010d\n", 1977);
// Output: Preceding with zeros: 0000001977

printf("Floats: %4.2f\n", 3.1416);
// Output: Floats: 3.14

printf("Characters: %d %c\n", 'a', 65);
// Output: Characters: 97 A
```

## Escape Sequences
Special characters for formatting output:
- `\n`: Newline
- `\"`: Double quote
- `\t`: Tab
- `\a`: Alert (bell)
- `\\`: Backslash

## Comments
Comments improve code readability and are ignored by the compiler.

### Single-line Comments
```c
// This is a single-line comment
```

### Multi-line Comments
```c
/*
This is a multi-line comment
that spans multiple lines
*/
```

## Assignment and Math Operations

### Assignment
```c
X = 231;
```

### Arithmetic Operations
- Addition: `X + 6`
- Subtraction: `X - 8`
- Multiplication: `X * 90`
- Division: `X / 3`
- Modulus (remainder): `X % 7`

## Operator Precedence
When multiple operations are present:
1. Parentheses `()` (innermost first if nested)
2. Multiplication `*`, Division `/`, Modulus `%`
3. Addition `+`, Subtraction `-`

Operations at the same level evaluate from left to right.

## Pre/Post Increment and Decrement

### Increment
**Post-increment:**
```c
int a = 5;
int b;
b = a++;  // Equivalent to: b = a; a = a + 1;
printf("%d %d\n", a, b);  // Output: 6 5
```

**Pre-increment:**
```c
int a = 5;
int b;
b = ++a;  // Equivalent to: a = a + 1; b = a;
printf("%d %d\n", a, b);  // Output: 6 6
```

### Decrement
**Post-decrement:**
```c
int a = 5;
int b;
b = a--;  // Equivalent to: b = a; a = a - 1;
printf("%d %d\n", a, b);  // Output: 4 5
```

**Pre-decrement:**
```c
int a = 5;
int b;
b = --a;  // Equivalent to: a = a - 1; b = a;
printf("%d %d\n", a, b);  // Output: 4 4
```


{% include week-nav.html next_link="/notes/week-01/syntax/" next_title="Syntax Guide" %}