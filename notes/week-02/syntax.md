---
layout: page
title: Week 2 Syntax
parent: Week 2
nav_exclude: true
---

# C Programming Syntax Examples - Week 2

This document demonstrates syntax for Functions, Standard Libraries, Scope, and Storage Classes.

## Predefined Functions

### Math Functions (`<math.h>`)
Requires `#include <math.h>` and often linking with `-lm` compiler flag.

```c
#include <stdio.h>
#include <math.h>

int main() {
    double x = 9.0;
    double y = 2.0;

    printf("Square Root: %.2f\n", sqrt(x));       // 3.00
    printf("Power: %.2f\n", pow(x, y));           // 81.00
    printf("Absolute Value: %.2f\n", fabs(-5.5)); // 5.50
    printf("Ceiling: %.2f\n", ceil(4.2));         // 5.00
    printf("Floor: %.2f\n", floor(4.9));          // 4.00
    return 0;
}
```

### Random Numbers (`<stdlib.h>`, `<time.h>`)

#### 1. Without Seeding (Predictable)
If you don't seed, the sequence repeats every time you run the program.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    // No srand() call
    printf("%d\n", rand()); // Will print the SAME number every run (e.g., 41)
    printf("%d\n", rand()); // Will print the SAME next number (e.g., 18467)
    return 0;
}
```

#### 2. With Seeding (Randomized)
Use `srand(time(NULL))` to initialize the generator with the current time.

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed using current time (changes every second)
    srand(time(NULL));

    // Generate random numbers
    int r1 = rand();          // Random number between 0 and RAND_MAX
    int r2 = rand() % 10;     // Random number between 0 and 9
    int r3 = 1 + rand() % 6;  // Random number between 1 and 6 (Dice roll)
    
    // General Formula: low + rand() % (high - low + 1)
    int min = 10, max = 20;
    int r4 = min + rand() % (max - min + 1); // Random number between 10 and 20

    printf("Random: %d, %d, %d, %d\n", r1, r2, r3, r4);
    return 0;
}
```

## User-Defined Functions

### Function with Prototype
Recommended structure: Prototype -> Main -> Definition.

```c
#include <stdio.h>

// 1. Function Prototype (Declaration)
// return_type function_name(parameter_list);
int square(int n);
void greet(void);

int main() {
    greet();
    int result = square(5);
    printf("5 squared is %d\n", result);
    return 0;
}

// 2. Function Definition (Implementation)
int square(int n) {
    return n * n;
}

void greet(void) {
    printf("Hello from a function!\n");
}
```

## Type Conversion (Casting)

### Implicit Conversion (Promotion)
Happens automatically when mixing types.

```c
int x = 10;
float y = 3.0;
// x is promoted to float (10.0) before division
float result = x / y; // 3.333...
```

### Explicit Conversion (Casting)
Forcing a type change manually.

```c
int sum = 10;
int count = 3;

// Without casting: integer division (10 / 3 = 3)
float avg1 = sum / count; 

// With casting: converts sum to float first (10.0 / 3 = 3.333...)
float avg2 = (float) sum / count; 

// Alternative: Multiply by 1.0
float avg3 = 1.0 * sum / count;

printf("Average: %.2f\n", avg2);
```

## Storage Classes

### `static` vs `auto` Variables

```c
#include <stdio.h>

void counter_function() {
    int auto_var = 0;        // Re-created every call
    static int static_var = 0; // Created once, remembers value
    
    auto_var++;
    static_var++;
    
    printf("Auto: %d, Static: %d\n", auto_var, static_var);
}

int main() {
    counter_function(); // Auto: 1, Static: 1
    counter_function(); // Auto: 1, Static: 2
    counter_function(); // Auto: 1, Static: 3
    return 0;
}
```

## Scope Rules

### Global vs Local Scope

```c
#include <stdio.h>

// File Scope (Global Variable)
int g = 100;

void test() {
    // Block Scope (Local Variable)
    int L = 20;
    printf("Inside Function -> Global: %d, Local: %d\n", g, L);
}

int main() {
    // Variable Shadowing: Local 'g' hides Global 'g' inside main
    int g = 50; 
    
    printf("Inside Main -> Local 'g': %d\n", g); // Prints 50
    test(); // Prints Global: 100, Local: 20
    
    // Nested Block Scope
    {
        int inner = 99;
        printf("Nested Block -> Inner: %d\n", inner);
    }
    // printf("%d", inner); // Error: inner is not visible here
    
    return 0;
}
```

{% include week-nav.html prev_link="/notes/week-02/notes/" prev_title="Lecture Notes" next_link="/notes/week-02/questions/" next_title="Questions" %}
