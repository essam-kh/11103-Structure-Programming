---
layout: page
title: Week 10 Notes
parent: Week 10
nav_exclude: true
---

# Structured Programming - Week 10 Notes

## Introduction to Pointers
 
<div style="display: flex; gap: 2rem; align-items: flex-start; margin-bottom: 2rem;">
  <div style="flex: 1;">
    While standard variables act like boxes that store specific values (like an integer or a character), real-world programming often requires knowing <strong>where</strong> those boxes are located. Instead of just passing data around, a program can pass the location of the data. This logic is implemented using <strong>Pointers</strong> in <span class="lang-c">C</span><span class="lang-cpp">C++</span>.
    A pointer does not store the value itself; rather, it stores the specific <strong>memory address</strong> where the value lives, acting like a map coordinate that guides the computer to the actual data.
  </div>
  <img src="{{ site.baseurl }}/assets/images/content/pointer.png" alt="Pointer Visualization" style="max-width: 350px; width: 100%; border-radius: 8px; box-shadow: 0 4px 6px -1px rgba(0, 0, 0, 0.1); flex-shrink: 0;">
</div>

### Declaring Pointers

To declare a pointer, we use the `*` (asterisk) operator:

```c
int *ptr1;   // Pointer to an integer
char *ptr2;  // Pointer to a char
float *ptr3; // Pointer to a float
```

> **Note**: The position of the asterisk does not matter to the compiler, but consistency is key. All the following are equivalent:
{: .note }

```c
int *ptr1; // Preferred by many
int* ptr2;
int * ptr3;
```

**Confusion with Multiple Declarations:**

```c
int *p, q;
```
*   `p` is a pointer to an integer.
*   `q` is a regular integer variable.

### The Address-of Operator (`&`)

The `&` is a unary operator that returns the **address** of its operand.

You can assign an address to a pointer using one of the following:
*   `&variable_name`
*   Array name (which acts as a pointer to the first element)
*   `NULL`
*   Another pointer

**Example:**

```c
int num = 10;
int *ptr;
ptr = &num;       // Assign address of num

int arr[5] = {1, 2, 3, 4, 5};
ptr = arr;        // Assign address of array start

ptr = NULL;       // Null pointer

int *p;
ptr = &p;         // Pointer to a pointer
```

> **Tip**: To avoid confusion, remember:
> *   Pointer **without** `*` operator (`p`): Refers to the **Address**.
> *   Pointer **with** `*` operator (`*p`): Refers to the **Value** pointed to (Dereferencing).
{: .note }

### Initializing Pointers

> **Warning**: You **cannot** initialize a pointer to `NULL` (or leave it uninitialized) and then try to assign a value to it directly. You must assign a valid memory address to it first.
{: .warning }

**Incorrect:**
```c
int *ptr1 = NULL;
*ptr1 = 10; // Segfault! Writing to address 0 is forbidden.
```

**Correct:**
```c
int val = 10;
int *ptr1 = &val;
*ptr1 = 20; // Valid: Updates value at address of val
```

### Printing using Pointers

> **Note**: use the `%p` format specifier to print pointer addresses.
{: .note }

<div class="lang-c" markdown="1">

```c
int num = 10;
int *p = &num;

printf("Address of num: %p\n", &num);
printf("Address of p: %p\n", &p);

printf("Address stored in p: %p\n", p); // Same as &num

printf("Value stored in p: %d\n", *p);  // Same as num (10)
printf("Value of num: %d\n", num);
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
int num = 10;
int *p = &num;

cout << "Address of num: " << &num << "\n";
cout << "Address of p: " << &p << "\n";

cout << "Address stored in p: " << p << "\n"; // Same as &num

cout << "Value stored in p: " << *p << "\n";  // Same as num (10)
cout << "Value of num: " << num << "\n";
```

</div>

## Operations on Pointers

### 1. Assignment Operator
A pointer can be assigned to another pointer of the same type.

```c
int *p, *q;
p = &q; // Logic error in example context, usually: q = ...; p = q;
        // If q is int*, p should be int*
```
*Correction to user example:*
```c
int x = 10;
int *p = &x;
int *q;
q = p; // q now points to x as well
```

### 2. Relational Operators
Pointers can be compared to check if they point to the same location.

<div class="lang-c" markdown="1">

```c
int *p, *q;
// ... assume p and q are initialized ...
if (p == q) {
    printf("p and q are pointing to the same address\n");
}
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
int *p, *q;
// ... assume p and q are initialized ...
if (p == q) {
    cout << "p and q are pointing to the same address\n";
}
```

</div>

### 3. Arithmetic Operators
You can perform addition and subtraction on pointers.

<div class="lang-c" markdown="1">

```c
int a[5] = {1, 2, 3, 4, 5};
int *p = a;   // Points to a[0]

p++;          // Move to next integer (a[1])
printf("%d\n", *p); 

p += 2;       // Jump 2 integers forward (a[3])
printf("%d\n", *p); 

p--;          // Move back 1 integer (a[2])
printf("%d\n", *p); 
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
int a[5] = {1, 2, 3, 4, 5};
int *p = a;   // Points to a[0]

p++;          // Move to next integer (a[1])
cout << *p << "\n"; 

p += 2;       // Jump 2 integers forward (a[3])
cout << *p << "\n"; 

p--;          // Move back 1 integer (a[2])
cout << *p << "\n"; 
```

</div>

> **Warning**: Pointer arithmetic can be dangerous! The program can accidentally access memory locations of other variables and change their content without warning if you go out of bounds.
{: .warning }

## Call by Value vs Call by Reference

### 1. Call by Value
In call by value, a **copy** of the variable is passed to the function. Changes made inside the function **do not** affect the original variable.

<div class="lang-c" markdown="1">

```c
#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10;
    int b = 20;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
#include <iostream>
using namespace std;

void swapVal(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10;
    int b = 20;
    cout << "Before swap: a = " << a << ", b = " << b << "\n";
    swapVal(a, b);
    cout << "After swap: a = " << a << ", b = " << b << "\n";
    return 0;
}
```

</div>

**Output:**
```
Before swap: a = 10, b = 20
After swap: a = 10, b = 20
```

</div>

<div style="flex: 1;" markdown="1">

### 2. Call by Reference
In call by reference, the **address** of the variable is passed. Changes made using pointers **do** affect the original variable.

<div class="lang-c" markdown="1">

```c
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10;
    int b = 20;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
#include <iostream>
using namespace std;

void swapRef(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10;
    int b = 20;
    cout << "Before swap: a = " << a << ", b = " << b << "\n";
    swapRef(&a, &b);
    cout << "After swap: a = " << a << ", b = " << b << "\n";
    return 0;
}
```

</div>

**Output:**
```
Before swap: a = 10, b = 20
After swap: a = 20, b = 10
```

</div>
</div>

## Function Return Value using Pointer

A function can return a pointer to a value.

<div class="lang-c" markdown="1">

```c
#include <stdio.h>

int *max(int *a, int *b) {
    if (*a > *b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a = 10;
    int b = 20;
    int *p = max(&a, &b);
    printf("Max: %d\n", *p);
    return 0;
}
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
#include <iostream>
using namespace std;

int *maxPtr(int *a, int *b) {
    if (*a > *b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a = 10;
    int b = 20;
    int *p = maxPtr(&a, &b);
    cout << "Max: " << *p << "\n";
    return 0;
}
```

</div>

**Output:**
```
Max: 20
```

> **Warning**: Never return a pointer to a **local variable** created inside the function, as that memory is deallocated when the function ends. Returning pointers to variables passed as arguments (like above) or dynamically allocated memory is safe.
{: .warning }

## Const Pointers

We can use the `const` keyword with pointers in three different ways:

### 1. Constant Pointer (`int *const p`)
The **address** stored in the pointer cannot change, but the **value** at that address can.

<div class="lang-c" markdown="1">

```c
int x = 10;
int y = 20;

// MUST be initialized immediately
int *const p = &x; 

printf("Original value: %d\n", *p);

*p = 50; 
printf("Changed value of x via pointer: %d\n", x);

// p = &y; // ERROR: Trying to change the address p points to
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
int x = 10;
int y = 20;

// MUST be initialized immediately
int *const p = &x; 

cout << "Original value: " << *p << "\n";

*p = 50; 
cout << "Changed value of x via pointer: " << x << "\n";

// p = &y; // ERROR: Trying to change the address p points to
```

</div>

### 2. Pointer to Constant (`const int *p`)
The **value** at the address cannot be changed through the pointer, but the **address** stored in the pointer can.

<div class="lang-c" markdown="1">

```c
int x = 10;
int y = 20;

const int *p = &x; 

printf("Original value pointed to by p: %d\n", *p);

p = &y;
printf("New value pointed to by p: %d\n", *p);

// *p = 50; // ERROR: Trying to change the value AT the address
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
int x = 10;
int y = 20;

const int *p = &x; 

cout << "Original value pointed to by p: " << *p << "\n";

p = &y;
cout << "New value pointed to by p: " << *p << "\n";

// *p = 50; // ERROR: Trying to change the value AT the address
```

</div>

### 3. Constant Pointer to Constant (`const int *const p`)
Neither the **address** nor the **value** can be changed.

<div class="lang-c" markdown="1">

```c
int x = 10;
int y = 20;

const int *const p = &x; 

printf("Value: %d\n", *p);

// *p = 50; // ERROR: Trying to change the value
// p = &y;  // ERROR: Trying to change the address
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
int x = 10;
int y = 20;

const int *const p = &x; 

cout << "Value: " << *p << "\n";

// *p = 50; // ERROR: Trying to change the value
// p = &y;  // ERROR: Trying to change the address
```

</div>

### Summary Table

| Declaration | Description | Can Change Address? | Can Change Value? |
| :--- | :--- | :---: | :---: |
| `const int *p` | Pointer to Constant | ✅ Yes | ❌ No |
| `int *const p` | Constant Pointer | ❌ No | ✅ Yes |
| `const int *const p` | Constant Pointer to Constant | ❌ No | ❌ No |

## Size of Pointer

The size of a pointer depends on the system architecture (e.g., 4 bytes on 32-bit, 8 bytes on 64-bit), regardless of the data type it points to.

`sizeof` can be used with:
*   Variable names
*   Type names
*   Constant values

**Example:**

<div class="lang-c" markdown="1">

```c
// 1. Variable Names
printf("Size of variable x (int): %d bytes\n", sizeof(x));
printf("Size of variable y (double): %d bytes\n", sizeof(y));

// 2. Type Names
printf("Size of type float: %d bytes\n", sizeof(float));
printf("Size of type long long: %d bytes\n", sizeof(long long));

// 3. Constant Values
printf("Size of constant 100: %d bytes\n", sizeof(100));
printf("Size of constant 3.14: %d bytes\n", sizeof(3.14));
printf("Size of constant 'A': %d bytes\n", sizeof('A'));
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
// 1. Variable Names
cout << "Size of variable x (int): " << sizeof(x) << " bytes\n";
cout << "Size of variable y (double): " << sizeof(y) << " bytes\n";

// 2. Type Names
cout << "Size of type float: " << sizeof(float) << " bytes\n";
cout << "Size of type long long: " << sizeof(long long) << " bytes\n";

// 3. Constant Values
cout << "Size of constant 100: " << sizeof(100) << " bytes\n";
cout << "Size of constant 3.14: " << sizeof(3.14) << " bytes\n";
cout << "Size of constant 'A': " << sizeof('A') << " bytes\n";
```

</div>

> **Note**: For arrays, `sizeof(arr)` returns the total size (size of 1 element * number of elements).
{: .note }

## More on Arrays and Pointers

Arrays and pointers are closely related. The name of an array acts like a constant pointer to its first element.

<div class="lang-c" markdown="1">

```c
int arr[5] = {1, 2, 3, 4, 5};
int *p = arr;

// Accessing elements using pointer arithmetic
printf("%d\n", *(p + 3)); // Prints arr[3] -> 4
printf("%d\n", *(p + 1)); // Prints arr[1] -> 2

int list[6] = {11, 12, 13, 14, 15, 16};
for (int i = 0; i < 6; i++) {
    printf("Address: %p, Value: %d, Arr Value: %d\n", *(list + i), *(list + i), list[i]);
}
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
int arr[5] = {1, 2, 3, 4, 5};
int *p = arr;

// Accessing elements using pointer arithmetic
cout << *(p + 3) << "\n"; // Prints arr[3] -> 4
cout << *(p + 1) << "\n"; // Prints arr[1] -> 2

int list[6] = {11, 12, 13, 14, 15, 16};
for (int i = 0; i < 6; i++) {
    cout << "Address: " << *(list + i) << ", Value: " << *(list + i) << ", Arr Value: " << list[i] << "\n";
}
```

</div>

**Output:**
```
4
2
Address: 0x7ffee4b5a4d0, Value: 11, Arr Value: 11
Address: 0x7ffee4b5a4d4, Value: 12, Arr Value: 12
Address: 0x7ffee4b5a4d8, Value: 13, Arr Value: 13
Address: 0x7ffee4b5a4dc, Value: 14, Arr Value: 14
Address: 0x7ffee4b5a4e0, Value: 15, Arr Value: 15
Address: 0x7ffee4b5a4e4, Value: 16, Arr Value: 16
```








## Pointer to a Char Array

When dealing with strings, we often use a `char` pointer to traverse the characters. The pointer starts at the first character and moves forward until it reaches the null terminator (`\0`).

**Example: Printing characters using a pointer**

<div class="lang-c" markdown="1">

```c
char str[] = "Hello";
char *ptr = str; // Points to 'H'

while (*ptr != '\0') {
    printf("%c ", *ptr);
    ptr++; // Move to the next character
}
printf("\n");
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
char str[] = "Hello";
char *ptr = str; // Points to 'H'

while (*ptr != '\0') {
    cout << *ptr << " ";
    ptr++; // Move to the next character
}
cout << "\n";
```

</div>

### Importance of the Null Terminator
The null terminator (`\0`) is crucial when working with char pointers. It serves as the stopping condition for loops.

### Constructing a New String
When you build a new string character by character, you **must manually add the null terminator** (`\0`) at the end. The computer *does not* do this for you automatically when manipulating pointers.

**Example: Copying a string manually**
```c
char source[] = "Copy me";
char dest[20];
char *p1 = source;
char *p2 = dest;

while (*p1 != '\0') {
    *p2 = *p1;
    p1++;
    p2++;
}
*p2 = '\0'; // CRITICAL: Mark the end of the new string
```
Without `*p2 = '\0';`, the `dest` string might not end where you expect, and printing it could show garbage characters.

{% include week-nav.html next_link="/notes/week-10/syntax/" next_title="Syntax Guide" %}
