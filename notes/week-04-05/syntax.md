---
layout: page
title: Week 4 & 5 Syntax
parent: Week 4 & 5
nav_exclude: true
---

# Week 4 & 5 Syntax Guide

## Loop Structures

### 1. For Loop
**Use when:** You know the exact number of iterations (e.g., iterating through an array).

```c
// Syntax
for (initialization; condition; update) {
    // code
}
```

<div class="lang-c" markdown="1">
```c
// Print even numbers 0-10
for (int i = 0; i <= 10; i += 2) {
    printf("%d ", i);
}
// Output: 0 2 4 6 8 10
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
// Print even numbers 0-10
for (int i = 0; i <= 10; i += 2) {
    cout << i << " ";
}
// Output: 0 2 4 6 8 10
```

</div>

### 2. While Loop
**Use when:** The number of iterations is unknown and depends on a condition (e.g., waiting for specific user input).

```c
// Syntax
while (condition) {
    // code
}
```

<div class="lang-c" markdown="1">

```c
// Input Validation
int age;
printf("Enter age (must be positive): ");
scanf("%d", &age);

while (age <= 0) {
    printf("Invalid! Try again: ");
    scanf("%d", &age);
}
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
// Input Validation
int age;
cout << "Enter age (must be positive): ";
cin >> age;

while (age <= 0) {
    cout << "Invalid! Try again: ";
    cin >> age;
}
```

</div>

### 3. Do-While Loop
**Use when:** The code *must* run at least once (e.g., menus).

```c
// Syntax
do {
    // code
} while (condition);
```

<div class="lang-c" markdown="1">

```c
// Simple Menus
int choice;
do {
    printf("1. Play\n2. Exit\nChoice: ");
    scanf("%d", &choice);
} while (choice != 1 && choice != 2);
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
// Simple Menus
int choice;
do {
    cout << "1. Play\n2. Exit\nChoice: ";
    cin >> choice;
} while (choice != 1 && choice != 2);
```

</div>

---

## Arrays

### Declaration & Initialization

```c
// 1. Declare (Contents undefined)
int scores[5]; 

// 2. Initialize (Fixed size)
int primes[5] = {2, 3, 5, 7, 11};

// 3. Auto-size (Compiler counts elements)
int numbers[] = {1, 2, 3}; // Size is 3

// 4. Partial Init (Rest become 0)
int data[10] = {1, 2}; // [1, 2, 0, 0, ...]
```

### Common Operations

**Iterating an Array**
<div class="lang-c" markdown="1">

```c
int numbers[] = {10, 20, 30, 40, 50};
int size = 5;

for (int i = 0; i < size; i++) {
    printf("Element %d: %d\n", i, numbers[i]);
}
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
int numbers[] = {10, 20, 30, 40, 50};
int size = 5;

for (int i = 0; i < size; i++) {
    cout << "Element " << i << ": " << numbers[i] << "\n";
}
```

</div>

**Summing Array Elements**
```c
int sum = 0;
for (int i = 0; i < size; i++) {
    sum += numbers[i];
}
```

---
## Reading Different Types of Arrays

To read values into an array, you typically use a loop and <span class="lang-c">`scanf`</span><span class="lang-cpp">`cin`</span>.

### 1. Reading Integers
<div class="lang-c" markdown="1">

```c
int numbers[5];

printf("Enter 5 integers: ");
for (int i = 0; i < 5; i++) {
    scanf("%d", &numbers[i]);
}
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
int numbers[5];

cout << "Enter 5 integers: ";
for (int i = 0; i < 5; i++) {
    cin >> numbers[i];
}
```

</div>

### 2. Reading Floats
<div class="lang-c" markdown="1">

```c
float grades[5];

printf("Enter 5 grades: ");
for (int i = 0; i < 5; i++) {
    scanf("%f", &grades[i]);
}
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
float grades[5];

cout << "Enter 5 grades: ";
for (int i = 0; i < 5; i++) {
    cin >> grades[i];
}
```

</div>

### 3. Reading chars

<div style="display: flex; gap: 20px;" markdown="1">

<div style="flex: 1;" markdown="1">

**Using Loop**
<div class="lang-c" markdown="1">

```c
char values[5];

printf("Enter 5 values: ");
for (int i = 0; i < 5; i++) {
    scanf(" %c", &values[i]);
}
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
char values[5];

cout << "Enter 5 values: ";
for (int i = 0; i < 5; i++) {
    cin >> values[i];
}
```

</div>
</div>

<div style="flex: 1;" markdown="1">

**Using String Format**
<div class="lang-c" markdown="1">

```c
char values[5];

printf("Enter 5 values: ");
scanf("%s", values); 
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
char values[5];

cout << "Enter 5 values: ";
cin >> values;
```

</div>
</div>

</div>

---

## Character Arrays (Strings)

Strings in <span class="lang-c">C</span><span class="lang-cpp">C++</span> are character arrays ending with `\0`.

### Declaration

```c
char name[] = "Alice";      // Size 6 ('A','l','i','c','e','\0')
char code[10] = "Bot";      // Safe buffer
```

### Reading Strings

<div style="display: flex; gap: 20px;" markdown="1">
<div style="flex: 1;" markdown="1">

**Method 1: <span class="lang-c">`scanf` (Stops at space)</span><span class="lang-cpp">`cin` (Stops at space)</span>**
<div class="lang-c" markdown="1">

```c
char firstName[50];
scanf("%s", firstName); 
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
char firstName[50];
cin >> firstName;
```

</div>
</div>
<div style="flex: 1;" markdown="1">

**Method 2: Character Loop (Reads char by char)**
<div class="lang-c" markdown="1">

```c
char text[100];
int i = 0;
// Read until newline
while (i < 99) {
    scanf(" %c", &text[i]);
    if (text[i] == '\n') 
        break;
    i++;
}
text[i] = '\0'; // Don't forget null terminator!
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
char text[100];
int i = 0;
// Read until newline
while (i < 99) {
    cin >> text[i];
    if (text[i] == '\n') 
        break;
    i++;
}
text[i] = '\0'; // Don't forget null terminator!
```

</div>
</div>
</div>

---

## Common Patterns

### Sentinel Loop
Getting input until a specific "sentinel" value (like -1) is entered.

<div class="lang-c" markdown="1">

```c
int n;
printf("Enter number (-1 to stop): ");
scanf("%d", &n);

while (n != -1) {
    printf("You entered %d\n", n);
    
    // Read next value
    printf("Enter number: ");
    scanf("%d", &n);
}
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
int n;
cout << "Enter number (-1 to stop): ";
cin >> n;

while (n != -1) {
    cout << "You entered " << n << "\n";
    
    // Read next value
    cout << "Enter number: ";
    cin >> n;
}
```

</div>

{% include week-nav.html prev_link="/notes/week-04-05/notes/" prev_title="Lecture Notes" next_link="/notes/week-04-05/worksheet/" next_title="Worksheet" %}
