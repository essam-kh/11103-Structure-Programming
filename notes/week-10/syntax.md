---
layout: page
title: Week 10 Syntax
parent: Week 10
nav_exclude: true
---

# Week 10 Syntax Guide

## Pointer Declaration & Initialization

### Declaration

```c
// data_type *pointer_name;
int *ptr;    // Pointer to an integer
char *cptr;  // Pointer to a character
double *dptr; // Pointer to a double
```

### Initialization

```c
int x = 10;
int *p = &x; // p holds the address of x
```

### Dereferencing

Accessing the value stored at the address a pointer is holding.

```c
int val = *p; // val gets the value of x (10)
*p = 20;      // x becomes 20
```

---

## Pointer Operations

### Arithmetic

| Operation | Description |
| :--- | :--- |
| `p++` | Move to next memory location |
| `p--` | Move to previous memory location |
| `p + n` | Move forward by `n` elements |
| `p - n` | Move backward by `n` elements |

### Relational

Comparing addresses (mostly used with arrays).

<div class="lang-c" markdown="1">

```c
if (p == q) {
    printf("p and q are pointing to the same location\n");
}
if (p < q)  { /* p comes before q in memory */ }
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
if (p == q) { 
    cout << "p and q are pointing to the same location\n";
}
if (p < q)  { /* p comes before q in memory */ }
```

</div>


---

## Const Pointers

```c
int x = 10, y = 20;

// 1. Pointer to Constant (Value is const)
const int *p1 = &x;
p1 = &y;       // ✅ OK: Changing Address
// *p1 = 50;   // ❌ ERROR: Changing Value

// 2. Constant Pointer (Address is const)
int *const p2 = &x;
*p2 = 50;      // ✅ OK: Changing Value
// p2 = &y;    // ❌ ERROR: Changing Address

// 3. Constant Pointer to Constant (Both are const)
const int *const p3 = &x;
// p3 = &y;    // ❌ ERROR: Changing Address
// *p3 = 50;   // ❌ ERROR: Changing Value
```

---

## Pointers and Arrays

Array names decay into pointers to their first element.

```c
int arr[5] = {10, 20, 30, 40, 50};
int *p = arr; // Equivalent to &arr[0]
```

Accessing elements:

```c
// Array Notation vs Pointer Notation
x = arr[2];   // 30
y = *(p + 2); // 30
```

---

## Pointers to Functions

Pointers can be passed to functions (Pass by Reference) or returned from functions.

### Pass by Reference

```c
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Usage: swap(&x, &y);
```

### Return Pointer

```c
int* getArray() {
    static int arr[5]; // Must be static or malloc'd
    return arr;
}
```

> **Warning**: Never return the address of a local automatic variable!
{: .warning }

{% include week-nav.html prev_link="/notes/week-10/notes/" prev_title="Lecture Notes" next_link="/notes/week-10/worksheet/" next_title="Worksheet" %}
