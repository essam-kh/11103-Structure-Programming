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

<img src="{{ site.baseurl }}/assets/images/content/program-process.png" alt="Program Process" style="max-width: 450px; width: 100%; height: auto; border-radius: 8px; box-shadow: 0 4px 6px -1px rgba(0, 0, 0, 0.1);">
</div>

<div class="lang-c" markdown="1">
## A Simple Program in C

Here is a simple C program that prints "Welcome To Structured Programming" to the screen:

```c
#include <stdio.h>
int main() {
    printf("Welcome To Structured Programming\n");
    return 0;
}
```
</div>

<div class="lang-cpp" markdown="1">
## A Simple Program in C++

Here is a simple C++ program that prints "Welcome To Structured Programming" to the screen:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Welcome To Structured Programming\n";
    return 0;
}
```
</div>

### Explanation

<div class="lang-c" markdown="1">
-   `#include <stdio.h>`: This line tells the compiler to include the **Standard Input Output** library. This library contains the definitions for functions like `printf/scanf` that we use to output/input text.
</div>
<div class="lang-cpp" markdown="1">
-   `#include <iostream>`: This line tells the compiler to include the **Standard Input Output** library. This library contains the definitions for functions like `cout/cin` that we use to output/input text.
</div>
-   `int main()`: This is the **main function** where the program execution begins. <span class="lang-c">Every C program must</span><span class="lang-cpp">Every C++ program must</span> have exactly one main function.
-   `{ ... }`: The curly braces define the **scope** or body of the function. All the code for the `main` function lives inside these braces.
<div class="lang-c" markdown="1">
-   `printf("Welcome To Structured Programming
");`: This function prints
</div>
<div class="lang-cpp" markdown="1">
-   `cout << "Welcome To Structured Programming
";`: This function prints
</div> the text "Welcome To Structured Programming" to the screen.
-   `return 0;`: This statement terminates the `main` function and returns the value `0` to the operating system. A return value of `0` generally signifies that the program executed successfully.

<h2 class="lang-c">Output Statements in C</h2>
<h2 class="lang-cpp">Output Statements in C++</h2>

<div class="lang-cpp" markdown="1">
###  Simple Output with `cout`
- Used for simple string output with no formatting
- Can only print strings

Example:
```cpp
cout << "Hello and welcome to Structured Programming class";
```

</div>
### Simple Output with `puts()`
- Used for simple string output with no formatting
- Automatically appends a newline at the end
- Can only print strings

Example:
```c
puts("Hello and welcome to Structured Programming class");
```

### Formatted Output with `printf()`
- Allows formatted output and supports multiple data types

Example:
```c
printf("Hello and welcome to Structured Programming class");
```

<div class="lang-cpp" markdown="1">
### Formatted Output in C++
- Use `iomanip` manipulators with `cout` to format outputs like floats.
- `#include <iomanip>`: This line tells the compiler to include the **Input/Output Manipulators** library. It provides tools for formatting output, such as `setprecision` to control decimal places.

Example:
```cpp
// Set precision to 2 decimal places and fixed-point notation
cout << fixed << setprecision(2) << 3.14159;
```
</div>

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

<img src="{{ site.baseurl }}/assets/images/content/memory.png" alt="Variables in Memory" style="max-width: 450px; width: 100%; height: auto; border-radius: 8px; box-shadow: 0 4px 6px -1px rgba(0, 0, 0, 0.1);">
</div>

### Data Types
<div class="lang-c" markdown="1">
Common data types in C:
1. `int`: Whole numbers without fractions (e.g., 34, 0, -1, 159)
2. `long int`: Larger whole numbers (e.g., 9000000L)
3. `char`: Single characters (e.g., 's', 'A', '#', '+', '8')
4. `float`: Real numbers with decimals (e.g., 2.0, -137.42, 0.0001)
5. `double`: High-precision real numbers (e.g., 3.1415926535)
</div>
<div class="lang-cpp" markdown="1">
Common data types in C++:
1. `int`: Whole numbers without fractions (e.g., 34, 0, -1, 159)
2. `long int`: Larger whole numbers (e.g., 9000000L)
3. `char`: Single characters (e.g., 's', 'A', '#', '+', '8')
4. `float`: Real numbers with decimals (e.g., 2.0, -137.42, 0.0001)
5. `double`: High-precision real numbers (e.g., 3.1415926535)
6. `bool`: Boolean values (true or false)
</div>

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

<div style="display: flex; gap: 4rem; align-items: flex-start;">
  <div>
    <strong>Valid examples:</strong>
    <ul>
      <li><code>A2test3</code></li>
      <li><code>_A</code></li>
      <li><code>student_name</code></li>
      <li><code>EmployeeSalary</code></li>
      <li><code>ahmad</code></li>
    </ul>
  </div>

  <div>
    <strong>Invalid examples:</strong>
    <ul>
      <li><code>2A</code> (starts with number)</li>
      <li><code>#A</code> (special character)</li>
      <li><code>student name</code> (space)</li>
      <li><code>Employee-Salary</code> (hyphen)</li>
      <li><code>if</code> (reserved word)</li>
    </ul>
  </div>
</div>

> **Note:** <span class="lang-c">Variable names in C are **case-sensitive**</span><span class="lang-cpp">Variable names in C++ are **case-sensitive**</span>. This means `sum`, `Sum`, and `SUM` are three different variables.
{: .note }

### Constant Variables

- Store a value that cannot be changed after assignment
- Must be assigned at declaration time
- Use `const` before the data type

Examples:
```c
const int MAX_GRADE = 100;
const float PI = 3.14;
```


> **Warning:** If you try to assign a value to a constant variable after its declaration, you will get a compilation error:
> ```c
> const int MAX = 100;
> MAX = 200; // Error: assignment of read-only variable 'MAX'
> ```
{: .warning }

<h2 class="lang-c">Input Statements in C</h2>
<h2 class="lang-cpp">Input Statements in C++</h2>

<div class="lang-cpp" markdown="1">
### Simple Input with `cin`
the `cin` is a stream object that is used to read input from the user.

Example:
```c
cin >> age;
```

- age: the variable name

</div>

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

### `scanf` Whitespace Issue
> **Note:** In C, you need to add a space before `%c` in `scanf` when you want to skip whitespace characters (like `\n`, space, or `\t`) left in the input buffer from previous input.
{: .note }

```c
scanf("%d", &x);
scanf(" %c", &ch); // Note the space before %c
```

## Formatting Output

<div class="lang-c" markdown="1">
The `printf()` function supports various formatting options:

### Basic Formatting
```c
printf("Name: %s, Number: %d, Grade: %.2f", "Essam", 7, 95.5000);
// Output: Name: Essam, Number: 7, Grade: 95.50
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
</div>

<div class="lang-cpp" markdown="1">
In C++, use `<iomanip>` manipulators to achieve similar formatting:

<div class="lang-cpp" markdown="1">
> **Note:** In C++, you can use `endl` or `"\n"` to output a newline. `endl` also flushes the output buffer, while `"\n"` does not. For most purposes, `"\n"` is preferred as it is faster.
{: .note }
</div>

### Basic Formatting
```cpp
cout << "Name: " << "Essam" << ", Number: " << 7 
     << ", Grade: " << fixed << setprecision(2) << 95.5000 << endl;
// Output: Name: Essam, Number: 7, Grade: 95.50
```

### Width, Fill, and Precision
```cpp
cout << "Decimals: " << 1977 << endl;
// Output: Decimals: 1977

cout << "Preceding with blanks: " << setw(10) << 1977 << endl;
// Output: Preceding with blanks:       1977

cout << "Preceding with zeros: " << setfill('0') << setw(10) << 1977 << endl;
// Output: Preceding with zeros: 0000001977

cout << "Floats: " << fixed << setprecision(2) << 3.1416 << endl;
// Output: Floats: 3.14

cout << "Characters: " << (int)'a' << " " << 'A' << endl;
// Output: Characters: 97 A
```
</div>

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
<div class="lang-c" markdown="1">
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

</div>
<div class="lang-cpp" markdown="1">
## Pre/Post Increment and Decrement

### Increment
**Post-increment:**
```c
int a = 5;
int b;
b = a++;  // Equivalent to: b = a; a = a + 1;
cout << a << " " << b << "\n";  // Output: 6 5
```

**Pre-increment:**
```c
int a = 5;
int b;
b = ++a;  // Equivalent to: a = a + 1; b = a;
cout << a << " " << b << "\n";  // Output: 6 6
```

### Decrement
**Post-decrement:**
```c
int a = 5;
int b;
b = a--;  // Equivalent to: b = a; a = a - 1;
cout << a << " " << b << "\n";  // Output: 4 5
```

**Pre-decrement:**
```c
int a = 5;
int b;
b = --a;  // Equivalent to: a = a - 1; b = a;
cout << a << " " << b << "\n";  // Output: 4 4
```

</div>

{% include week-nav.html next_link="/notes/week-01/syntax/" next_title="Syntax Guide" %}