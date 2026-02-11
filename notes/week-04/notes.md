---
layout: page
title: Week 4 Notes
parent: Week 4
nav_exclude: true
---
# Structured Programming - Week 4 Notes

## Introduction to Loops

While conditional statements allow a program to make choices, **repetition structures** (loops) allow a program to be efficient and tireless. Instead of writing the same code multiple times, loops enable a program to execute a single block of code repeatedly.



## Types of Loops

C provides three types of loops. Here is a quick comparison:

<div style="display: flex; gap: 1.5rem; margin-top: 1.5rem; margin-bottom: 2rem; flex-wrap: wrap;">
  <!-- For Loop Card -->
  <div style="flex: 1; min-width: 250px; background: #f8f9fa; border: 1px solid #e1e4e8; border-radius: 8px; padding: 1.5rem;">
    <h3 style="margin-top: 0; border-bottom: 1px solid #e1e4e8; padding-bottom: 0.5rem; color: #6f42c1;">For Loop</h3>
    <p>Best when the <strong>number of iterations is known</strong> beforehand.</p>
  </div>

  <!-- While Loop Card -->
  <div style="flex: 1; min-width: 250px; background: #f8f9fa; border: 1px solid #e1e4e8; border-radius: 8px; padding: 1.5rem;">
    <h3 style="margin-top: 0; border-bottom: 1px solid #e1e4e8; padding-bottom: 0.5rem; color: #0366d6;">While Loop</h3>
    <p>Best when the number of iterations is <strong>unknown</strong> and depends on a condition.</p>
  </div>

  <!-- Do-While Loop Card -->
  <div style="flex: 1; min-width: 250px; background: #f8f9fa; border: 1px solid #e1e4e8; border-radius: 8px; padding: 1.5rem;">
    <h3 style="margin-top: 0; border-bottom: 1px solid #e1e4e8; padding-bottom: 0.5rem; color: #2ea44f;">Do-While Loop</h3>
    <p>Similar to `while`, but guarantees the code runs <strong>at least once</strong>.</p>
  </div>
</div>

### 1. The `for` Loop

Use this when you know exactly how many times you want to loop.

<div style="text-align: center; margin: 20px 0;">
    <img src="{{ site.baseurl }}/assets/images/for-flowchart.png" alt="For Loop Flowchart" style="max-width: 400px; width: 100%; border-radius: 8px; box-shadow: 0 2px 4px rgba(0,0,0,0.1);">
</div>

**Structure:**

```c
for (initialization; condition; update) {
    // code to be executed
}
```

*   **Initialization**: Sets the starting value of the loop control variable.
*   **Condition**: Checked before each iteration. If true, the loop runs.
*   **Update**: Updates the loop control variable after each iteration.

**Sequence of Execution:**
1.  **Initialization**: Runs once at the start.
2.  **Condition Check**: If true, enter the loop; if false, stop.
3.  **Code Execution**: Run the code inside the block.
4.  **Update**: Update the loop variable.
5.  **Repeat**: Go back to Step 2.

**Example:**

```c
for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
}
```

### 2. The `while` Loop

Use this when the loop depends on a condition being true, not a specific count.

<div style="text-align: center; margin: 20px 0;">
    <img src="{{ site.baseurl }}/assets/images/while-flowchart.png" alt="While Loop Flowchart" style="max-width: 400px; width: 100%; border-radius: 8px; box-shadow: 0 2px 4px rgba(0,0,0,0.1);">
</div>

**Structure:**

```c
while (condition) {
    // code to be executed
}
```

> **Important Notes:**
>
> *   The loop control variable must be **initialized** before the `while` loop starts.
> *   If the condition is false initially, the `while` loop code is **never** executed.
{: .note }

**Sequence of Execution:**
1.  **Condition Check**: If true, enter the loop; if false, stop.
2.  **Code Execution**: Run the code inside the block.
3.  **Repeat**: Go back to Step 1.

### 3. The `do-while` Loop

Use this when you need the code to execute at least once (e.g., displaying a menu).

<div style="text-align: center; margin: 20px 0;">
    <img src="{{ site.baseurl }}/assets/images/do-while-flowchart.png" alt="Do-While Loop Flowchart" style="max-width: 400px; width: 100%; border-radius: 8px; box-shadow: 0 2px 4px rgba(0,0,0,0.1);">
</div>

**Structure:**

```c
do {
    // code to be executed
} while (condition);
```

> **Key Difference:** The condition is checked **after** the code block is executed at least once.
{: .note }

**Sequence of Execution:**
1.  **Code Execution**: Run the code inside the block (guaranteed at least once).
2.  **Condition Check**: If true, repeat from Step 1; if false, stop.

---

## Loop Control

### Any `for` loop can be rewritten as a `while` loop:

<div style="display: flex; gap: 20px;" markdown="1">

<div style="flex: 1;" markdown="1">

**For Loop**
```c
for (init; cond; update) {
    // code
}
```
</div>

<div style="flex: 1;" markdown="1">

**Equivalent While Loop**
```c
init;
while (cond) {
    // code
    update;
}
```
</div>

</div>

### Sentinel-Controlled Loops

A **sentinel** is a specific value used to terminate a loop when the data count is unknown.

```c
int num;
printf("Enter number (-1 to quit): ");
scanf("%d", &num);

while (num != -1) { // -1 is the sentinel
    // Process num
    printf("Enter number (-1 to quit): ");
    scanf("%d", &num);
}
```

### Break and Continue

*   **`break`**: Exits the loop immediately.
*   **`continue`**: Skips the *rest* of the current iteration and jumps to the next one.

<div style="display: flex; gap: 20px;" markdown="1">

  <div style="flex: 1;" markdown="1">

**Break Example**
```c
for (int i=1; i<=5; i++) {
    if (i == 3) break;
    printf("%d ", i);
}
```
Output: `1 2 `
  </div>

  <div style="flex: 1;" markdown="1">

**Continue Example**
```c
for (int i=1; i<=5; i++) {
    if (i == 3) continue;
    printf("%d ", i);
}
```
Output: `1 2 4 5 `
  </div>

</div> 


## Introduction to Arrays

**Arrays** allow us to store multiple values of the same type under a single variable name.

*   **Problem**: Creating separate variables for 50 students (`grade1`, `grade2`...) is tedious.
*   **Solution**: Use an array `grades[50]` to store all of them efficiently.


<div style="text-align: center; margin: 2rem 0;">
    <img src="{{ site.baseurl }}/assets/images/arrays-vs-variables.png" alt="Arrays vs Variables" style="max-width: 500px; width: 100%; border-radius: 8px; box-shadow: 0 4px 6px rgba(0,0,0,0.1);">
</div>

{: .note }
> **Key Terminology**
>
> *   **Element**: An individual item in the array.
> *   **Index (Subscript)**: The position of an element (starts at **0**).
> *   **Size**: The total number of elements.

### Defining and Initializing

We can define and initialize arrays in several ways:

| Method | Code Example | Description |
| :--- | :--- | :--- |
| **Declaration** | `int arr[5];` | Reserves 5 integers (content is undefined). |
| **Multiple** | `int a[5], b[10];` | Declares multiple arrays. |
| **Initialization** | `int a[] = {1, 2, 3};` | Size is automatically set to 3. |
| **Partial Init** | `int a[5] = {1, 2};` | `a[0]=1, a[1]=2`, rest are `0`. |
| **Zero Init** | `int a[5] = {0};` | All elements are initialized to `0`. |

<div style="text-align: center; margin: 2rem 0;">
    <img src="{{ site.baseurl }}/assets/images/array.png" alt="Array Structure" style="max-width: 500px; width: 100%; border-radius: 8px; box-shadow: 0 4px 6px rgba(0,0,0,0.1);">
</div>


### Common Errors

{: .warning }
> **Common Array Errors**
>
> *   **Out of Bounds Access**: Accessing an index outside the valid range (0 to size-1).
>     ```c
>     int arr[5];
>     arr[5] = 10; // Runtime Error! Valid indices are 0-4
>     ```
> *   **Excess Elements**: Providing more initializers than the array size.
>     ```c
>     int arr[3] = {1, 2, 3, 4}; // Syntax Error!
>     ```

## Preprocessor Directive:

The `#define` directive is used to define a **symbolic constant**.

*   **Syntax**: `#define NAME value` (No semicolon!)
*   **Action**: Before compilation, the **Preprocessor** replaces every occurrence of `NAME` with `value`.

**Example: Dynamic Array Sizing**

```c
#include <stdio.h>
#define SIZE 10

int main() {
    int arr[SIZE]; // Compiler sees: int arr[10];

    for (int i = 0; i < SIZE; i++) {
        arr[i] = i * 2;
    }
    return 0;
}
```

---

## Array Workflows

### 1. Calculating Average
Reading student grades and calculating the average.

```c
#include <stdio.h>
#define STUDENTS 5

int main() {
    int grades[STUDENTS] = {85, 90, 78, 92, 88};
    int sum = 0;

    for (int i = 0; i < STUDENTS; i++) {
        sum += grades[i];
    }

    printf("Average: %.2f\n", (float)sum / STUDENTS);
    return 0;
}
```

---

## Character Arrays (Strings)

A **String** in C is essentially an array of characters ending with a **null terminator** (`'\0'`).

### Initialization

| Method | Code | Size | Notes |
| :--- | :--- | :--- | :--- |
| **String Literal** | `char s[] = "Hi";` | 3 | `'H'`, `'i'`, `'\0'` (Auto-sized) |
| **Char List** | `char s[] = {'H', 'i', '\0'};` | 3 | Manual null terminator required. |
| **Fixed Size** | `char s[10] = "Hi";` | 10 | Remaining elements are zeroed. |

{: .note }
> **Crucial Rule**
>
> Always define a character array large enough to hold the text **plus** the null terminator (`\0`).

### Reading Strings

<div style="display: flex; gap: 20px;" markdown="1">

<div style="flex: 1;" markdown="1">

#### Method 1: Using `scanf`
Reads a string until the first **whitespace** (space, tab, newline).

```c
char name[20];
scanf("%s", name);
```
</div>

<div style="flex: 1;" markdown="1">

#### Method 2: Character Loop
Reads characters one by one. Useful for specific parsing or validation.

```c
char str[20];
for (int i=0; i<5; i++) {
    scanf(" %c", &str[i]); 
    // Note space before %c
}
```
</div>

</div>

### Iterating Over a String

If the size is unknown, we rely on the `\0` terminator to stop the loop.

```c
char text[] = "Hello World";

for (int i = 0; text[i] != '\0'; i++) {
    printf("%c-", text[i]);
}
// Output: H-e-l-l-o- -W-o-r-l-d-
```

---

### Frequency Counter
Counting how many times each number (0-9) appears in a random set.

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20

int main() {
    srand(time(NULL));
    int arr[SIZE];

    // 1. Generate Random Numbers
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 10; // Numbers 0-9
    }

    // 2. Count Frequencies
    // We need indices 0-9, so size is 10
    int freq[10] = {0}; 

    for (int i = 0; i < SIZE; i++) {
        freq[arr[i]]++; 
    }

    // 3. Print Results
    for (int i = 0; i < 10; i++) {
        printf("Number %d occurs %d times\n", i, freq[i]);
    }
    return 0;
}
```

### Frequency of Characters
We can use the same logic to count characters. Since `char` is just a small integer (ASCII), we can map characters to array indices.

*   **Example**: Calculate frequency of letters 'a' through 'z'.
*   **Logic**: `index = char - 'a'`. So 'a' becomes 0, 'b' becomes 1, etc.
*   **Size**: 26 (for English lowercase alphabet).

```c
#include <stdio.h>
#include <string.h>

int main() {
    char text[] = "Programming is fun";
    int freq[26] = {0}; // Indices 0-25 for 'a'-'z'

    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];
        // Check if character is a lowercase letter
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a'; // Map 'a' -> 0, 'b' -> 1...
            freq[index]++;
        }
    }

    for (int i = 0; i < 26; i++) {
        // Only print characters that appeared
        if (freq[i] > 0) {
            printf("Letter '%c': %d\n", i + 'a', freq[i]);
        }
    }
    return 0;
}
```

---

{% include week-nav.html next_link="/notes/week-04/syntax/" next_title="Syntax Guide" %}
```