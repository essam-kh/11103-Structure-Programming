---
layout: page
title: Week 2 Notes
parent: Week 2
nav_exclude: true
---

# Structured Programming - Week 2 Notes

## Introduction to Functions

The best way to develop and maintain a large program is to divide it into several smaller program modules, each of which is more manageable than the original program. Modules are written as **functions** in C.

### Benefits of Functions

*   **Simpler Code**: Small modules are easier to read and understand than one massive block of code.
*   **Code Reuse**: You can call a function many times throughout a program instead of rewriting the same code.
*   **Faster Development**: Common tasks (like math calculations) can be reused across different projects.
*   **Better Testing**: It is easier to isolate, test, and fix errors in individual modules.

---

## Predefined Functions

C provides many standard functions to perform common tasks, especially mathematical calculations. To use these, you often need to include the `<math.h>` header.

{: .note }
> **Black Box Concept**
>
> Predefined functions can be treated as a **"Black Box"**. You give them an input (argument), they process it, and they return an output. You don't need to know *how* they work inside, just *how to use* them.
>
> ![Black Box Diagram](../../assets/images/black-box.png)

### Common Math Functions

| Function | Description | Example | Result |
| :--- | :--- | :--- | :--- |
| `sqrt(x)` | Square root of *x* | `sqrt(900.0)` | `30.0` |
| `exp(x)` | Exponential function *e^x* | `exp(1.0)` | `2.718282` |
| `log(x)` | Natural logarithm of *x* (base *e*) | `log(2.718282)` | `1.0` |
| `log10(x)` | Logarithm of *x* (base 10) | `log10(100.0)` | `2.0` |
| `fabs(x)` | Absolute value of *x* | `fabs(-5.0)` | `5.0` |
| `ceil(x)` | Rounds *x* up to the smallest integer | `ceil(9.2)` | `10.0` |
| `floor(x)` | Rounds *x* down to the largest integer | `floor(9.2)` | `9.0` |
| `pow(x, y)` | *x* raised to the power of *y* (*x^y*) | `pow(2, 7)` | `128.0` |
| `fmod(x, y)` | Remainder of *x/y* as a floating point number | `fmod(13.657, 2.333)` | `1.992` |
| `sin(x)` | Trigonometric sine of *x* (in radians) | `sin(0.0)` | `0.0` |
| `cos(x)` | Trigonometric cosine of *x* (in radians) | `cos(0.0)` | `1.0` |
| `tan(x)` | Trigonometric tangent of *x* (in radians) | `tan(0.0)` | `0.0` |

### Example: Math Functions
```c
printf("Square root of 900.0: %.1f\n", sqrt(900.0)); // 30.0
printf("2 raised to power 7: %.1f\n", pow(2, 7));    // 128.0
printf("Absolute value of -5.0: %.1f\n", fabs(-5.0)); // 5.0
printf("Ceiling of 9.2: %.1f\n", ceil(9.2));         // 10.0
```

---

## Standard Library Headers

To use the predefined functions, we must include the appropriate header files using the `#include` preprocessor directive.

| Header File | Description |
| :--- | :--- |
| **`<math.h>`** | Contains function prototypes for math library functions. |
| **`<stdio.h>`** | Contains standard input/output functions types and information used by them. |
| **`<stdlib.h>`** | Contains function prototypes for conversions, random numbers, memory allocation, and other utility functions. |
| `<string.h>` | Contains function prototypes for string processing functions. |
| **`<time.h>`** | Contains function prototypes and types for manipulating time and date. |
| `<assert.h>` | Contains macros and information for adding diagnostics that aid program debugging. |
| `<ctype.h>` | Contains function prototypes for character testing and conversion (e.g., lowercase to uppercase). |
| `<errno.h>` | Defines macros that are useful for reporting error conditions. |
| `<float.h>` | Contains the floating point size limits of the system. |
| `<limits.h>` | Contains the integral size limits of the system. |
| `<locale.h>` | Contains function prototypes to handle different conventions for data like dates, times, and currency. |
| `<setjmp.h>` | Contains function prototypes that allow bypassing of the usual function call and return sequence. |
| `<signal.h>` | Contains function prototypes and macros to handle various conditions during program execution. |
| `<stdarg.h>` | Defines macros for dealing with a list of arguments to a function whose number and types are unknown. |
| `<stddef.h>` | Contains common definitions of types used by C for performing certain calculations. |


## Random Number Generation

The `rand()` function (from `<stdlib.h>`) generates a pseudorandom integer between `0` and `RAND_MAX` (most likely 32767).

### Seeding the Random Number Generator

By default, `rand()` produces the **same sequence of numbers** every time you run the program. This is useful for debugging but bad for games or simulations where you want unpredictability.

To allow the `rand` function to produce different sequences, we must **seed** the random number generator using `srand()`.

*   **Syntax:** `srand(time(NULL));`
*   **Common Usage:** Use the current time as the seed so it changes on every run.
    *   Requires `<time.h>`
    *   Call `srand(time(NULL));` **once** at the beginning of `main`.

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Seed with current time
    printf("%d", rand());
    return 0;
}
```

### Scaling Random Numbers

To get a number within a specific range, use the modulus operator (`%`) and an offset.

#### 1. Range `[0, n-1]`
**Formula:** `rand() % n`

**Example:** Generate a number between 0 and 5.
```c
int num = rand() % 6; 
printf("%d", num);
// Expected Output: A number like 0, 1, 2, 3, 4, or 5
```

#### 2. Range `[1, n]`
**Formula:** `1 + (rand() % n)`

**Example:** Simulate a 6-sided die (1 to 6).
```c
int face = 1 + rand() % 6;
printf("%d", face);
// Expected Output: A number like 1, 2, 3, 4, 5, or 6
```

#### 3. General Range `[low, high]`
**Formula:** `low + rand() % (high - low + 1)`

**Example:** Generate a number between 10 and 20.
```c
int low = 10;
int high = 20;
int result = low + rand() % (high - low + 1);
printf("%d", result);
// Expected Output: A number between 10 and 20 (inclusive)
```

---

## User-Defined Functions

You can define your own functions to perform specific tasks.

### Function Format

```c
return_type function_name(parameter_list) {
    declarations;
    statements;
    return expression; // Optional if return_type is void
}
```

### Key Components

1.  **Return Type**: The data type of the result (e.g., `int`, `float`, `char`). Use `void` if the function returns nothing.
2.  **Function Name**: A unique identifier for the function.
3.  **Parameter List**: A comma-separated list of input variables (type and name).
4.  **Body**: The block of code that executes when the function is called.

<div style="display: flex; gap: 1.5rem; margin-top: 1.5rem;">
  <!-- Void Function Card -->
  <div style="flex: 1; background: #f8f9fa; border: 1px solid #e1e4e8; border-radius: 8px; padding: 1.5rem; display: flex; flex-direction: column;">
    <h3 style="margin-top: 0; color: #24292e; border-bottom: 1px solid #e1e4e8; padding-bottom: 0.5rem; margin-bottom: 1rem;">Void Function</h3>
    <p style="margin-bottom: 1rem; flex-grow: 1;">Using <code>void</code> means the function <strong>returns nothing</strong>.</p>
    <div class="language-c highlighter-rouge" style="margin: 0;"><div class="highlight"><pre class="highlight"><code><span class="kt">void</span> <span class="nf">printHello</span><span class="p">()</span> <span class="p">{</span>
    <span class="n">printf</span><span class="p">(</span><span class="s">"Hello!\n"</span><span class="p">);</span>
    <span class="c1">// No return needed</span>
<span class="p">}</span>
</code></pre></div></div>
  </div>

  <!-- Non-Void Function Card -->
  <div style="flex: 1; background: #f8f9fa; border: 1px solid #e1e4e8; border-radius: 8px; padding: 1.5rem; display: flex; flex-direction: column;">
    <h3 style="margin-top: 0; color: #24292e; border-bottom: 1px solid #e1e4e8; padding-bottom: 0.5rem; margin-bottom: 1rem;">Non-Void Function</h3>
    <p style="margin-bottom: 1rem; flex-grow: 1;">Specifying a type (e.g., <code>int</code>) means it <strong>must return a value</strong>.</p>
    <div class="language-c highlighter-rouge" style="margin: 0;"><div class="highlight"><pre class="highlight"><code><span class="kt">int</span> <span class="nf">square</span><span class="p">(</span><span class="kt">int</span> <span class="n">n</span><span class="p">)</span> <span class="p">{</span>
    <span class="k">return</span> <span class="n">n</span> <span class="o">*</span> <span class="n">n</span><span class="p">;</span>
    <span class="c1">// Must return an int</span>
<span class="p">}</span>
</code></pre></div></div>
  </div>
</div>

### Function Prototypes

A **Function Prototype** tells the compiler the function's name, return type, and parameters *before* it is defined. This allows you to call a function before its actual code definition appears (e.g., if the function is written after `main`).

**Syntax:** `int maximum(int x, int y, int z);`
*   Takes in 3 `int`s.
*   Returns an `int`.
*   **Important:** The prototype, function header, and function calls must all agree in the number, type, and order of arguments.

{: .warning }
> **Crucial Rule**
>
> The function prototype, function definition, and function call must **ALL** match in:
> 1. Number of arguments
> 2. Type of arguments
> 3. Order of arguments
> 4. Return type

### Example: User-Defined Function
Here is a complete program that calculates the square of numbers using a function.

```c
#include <stdio.h>

// Function Prototype
int square(int y);

int main() {
    printf("%d\n", square(2)); // 4
    printf("%d\n", square(5)); // 25
    return 0;
}

// Function Definition
int square(int y) {
    return y * y; // Returns the square of y
}
```

---

## Call by Value vs. Call by Reference

| Feature | Call by Value | Call by Reference |
| :--- | :--- | :--- |
| **Concept** | Copy of argument passed to function | Passes original argument (address) |
| **Effect** | Changes in function do **not** affect original | Changes in function **affect** original |
| **Usage** | Use when function does not need to modify argument | Only used with trusted functions |
| **Safety** | Avoids accidental changes | Can modify original data |

### Conceptual Difference

Think of it like sharing a document:

*   **Call by Value:** You give your friend a **photocopy** of the document. If they write on it (modify the data), your original document remains unchanged.
*   **Call by Reference:** You give your friend access to the **original** document. If they write on it, you see the changes too.

> **Note:** In C, functions use **Call by Value** by default. To use Call by Reference, we use **Pointers**, which will be covered in later weeks.
{: .note }

---

## Type Promotion & Conversion

When an expression contains variables of different data types, C automatically converts them to a common type. This is called **Implicit Conversion** or **Promotion**.

### Promotion Hierarchy
Data types are ranked from "High" to "Low". Operands of a lower type are promoted to the higher type in an expression.

**Hierarchy (High to Low):**

| Data Type | `printf` Format Specifier | `scanf` Format Specifier |
| :--- | :--- | :--- |
| `long double` | `%Lf` | `%Lf` |
| `double` | `%f` | `%lf` |
| `float` | `%f` | `%f` |
| `unsigned long int` | `%lu` | `%lu` |
| `long int` | `%ld` | `%ld` |
| `unsigned int` | `%u` | `%u` |
| `int` | `%d` | `%d` |
| `unsigned short` | `%hu` | `%hu` |
| `short` | `%hd` | `%hd` |
| `char` | `%c` | `%c` |

**Example:**
```c
int x = 10;
float y = 3.0;
float result = x / y; // x is promoted to float (10.0), result is 3.333...
```

### Explicit Conversion (Casting)
You can force a conversion using a **Cast Operator**: `(type) variable`.

```c
int total = 10;
int count = 3;
float average = (float) total / count; // total is cast to float explicitly
```

> **Note:** Another common method is multiplying by `1.0` to force generic promotion (implicitly converts to double):
{: .note }
> ```c
> float average = 1.0 * total / count; 
> ```


---

## Storage Classes

Storage classes define the **scope** (visibility) and **lifetime** of variables.

### 1. Automatic
*   **Scope**: Local (inside a function or block).
*   **Lifetime**: Created when the block is entered, destroyed when exited.
*   **Default**: This is the default for all local variables.

### 2. Static
*   **Scope**: Local (inside a function), but...
*   **Lifetime**: Exists for the **entire program execution**.
*   **Key Feature**: Retains its value between function calls.
*   **Initialization**: Initialized only once (defaults to 0 if not initialized).

### Example: Static vs. Auto

```c
#include <stdio.h>

void test_static() {
    int a = 1;          // Auto: Re-created every time (Always 1)
    static int s = 1;   // Static: Retains value (1, 2, 3...)
    
    printf("a = %d, s = %d\n", a++, s++);
}

int main() {
    test_static(); // a = 1, s = 1
    test_static(); // a = 1, s = 2
    test_static(); // a = 1, s = 3
    return 0;
}
```
---

### Variable Default Values

> **Note:**
>
> *   **Global Variables:** The default value for all global variables (static or auto) is 0.
> *   **Local Variables (auto):** The default value is garbage (random value).
> *   **Local Variables (static):** The default value is 0.
{: .note }

## Scope Rules

The **Scope** of an identifier is the portion of the program where it can be referenced.

1.  **Block Scope**: Identifiers declared inside a block (`{ ... }`) are only visible/accessible within that block. (e.g., Local variables).
2.  **File Scope**: Identifiers declared outside of any function (Global variables, Function prototypes) are visible from the point of declaration to the end of the file.
3.  **Function Prototype Scope**: Identifiers in the parameter list of a prototype are only visible within the prototype itself.

### Example: Scope Rules

```c
#include <stdio.h>

// 2. File Scope: 'global_var' is visible from here to the end of the file
int global_var = 100; 

// 3. Function Prototype Scope: The parameter name 'x' is only meaningful here
void demo_scopes(int x); 

int main() {
    // 1. Block Scope: 'local_main' is visible only within the main function block
    int local_main = 10; 

    printf("Main - Global: %d, Local: %d\n", global_var, local_main);
    
    // Nested Block Scope
    {
        int local_nested = 20; // Visible only inside this block {}
        printf("Nested Block - Inner: %d\n", local_nested);
    }
    // printf("%d", local_nested); // ERROR: local_nested is not visible here

    // Nested Block Scope (Variable Shadowing)
    {
        int local_main = 999; // Hides the outer 'local_main'
        printf("Nested Block - Shadowed Local: %d\n", local_main); // Prints 999
    }
    printf("Main - Local after block: %d\n", local_main); // Prints 10 again

    demo_scopes(5);
    return 0;
}

void demo_scopes(int p) {
    printf("Inside demo_scopes function with parameter: %d\n", p);
}
```

---

{% include week-nav.html next_link="/notes/week-02/syntax/" next_title="Syntax Guide" %}