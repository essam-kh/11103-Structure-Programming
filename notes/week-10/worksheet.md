---
layout: page
title: Week 10 Worksheet
parent: Week 10
nav_exclude: true
---

# Week 10 Worksheet

> **Note:** Try to solve these questions on your own.
{: .note }

## Question 1: Find the Errors
The following program has logic and/or compiler errors. Identify **5 errors** and for each error:
1. Mention the **line number** where the error occurred.
2. **Rewrite** the line containing the error after fixing it.

Your answer should be in the following format:
*   Line `xx` should be: `corrected version of line xx`
*   Line `yy` should be: `corrected version of line yy`

### Part 1

```c
#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;
    float average;

    printf("Enter 5 numbers: ");

    // Loop to read input
    for (int i = 0; i <= 5; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // Calculate average
    average = sum / 5; 

    // Print the result
    printf("The average is %.2f\n", average)

    // Check for perfect score
    if (average = 100) {
        printf("Perfect Score!\n");
    }

    // End message
    printf(Program Ended);

    return 0;
}
```

{% include expandable-code.html title="Solution (Part 1)" id="sol-1" file="code/week-10/solution-01.c" %}

### Part 2

```c
#include <stdio.h>

int sum = 0;

// stores x + y in result and adds the result to the global variable sum.
add(int x, int y, int* result) {
    result = x + y;
    int sum += (x + y);
}

// returns the absolute value of x
int absolute_value(int x) {
    if (x < 0)
        return x * -1;
}

int main() {
    int x = 7;
    int y = -8;

    // change y from -8 to 8 using the function absolute_value()
    absolute_value(y);

    // store in result the value of x + y
    int result;
    result = add(y, x);

    // should print: 7 + 8 = 15.
    printf("%d + %d = %d\n", x, y, result);
}
```

{% include expandable-code.html title="Solution (Part 2)" id="sol-2" file="code/week-10/solution-02.c" %}

---

## Question 2: What is the Output?
Determine the output of the following code snippet:

```c
int x;
int y;
int *p = &x;
int *q = &y;

*p = 35;
*q = 98;
*p = *q;

printf("%d  %d  %d  %d", x, y, *p, *q);
```

{% include expandable-code.html title="Solution" id="sol-3" file="code/week-10/solution-03.c" %}

---

## Question 3: Valid or Invalid?
Which of the following statements is **NOT** valid?

### Part 1
Given the declaration:
```c
int x = 5, y = 3;
int p[5] = {5, 6, 7, 8, 9};
int *q = &y;
```

*   `p = q;`
*   `*p = 56;`
*   `*p = *q;`
*   `q = &x;`

{% include expandable-code.html title="Solution (Part 1)" id="sol-4" file="code/week-10/solution-04.c" %}


### Part 2
Given the declaration:
```c
int x = 5, y = 3;
int q[5] = {5, 6, 7, 8, 9};
int *p = &y;
```

*   `p = q;`
*   `*p = 56;`
*   `*p = *q;`
*   `q = &x;`

{% include expandable-code.html title="Solution (Part 2)" id="sol-5" file="code/week-10/solution-05.c" %}

---

## Question 4: Reverse Array using Pointers
Write a program that asks the user for the number of elements `N`, reads `N` integers into an array using **pointers**, and then prints the array elements in **reverse order** using pointers.

**Example:**
```
Enter number of elements: 5
Enter elements:
1 2 3 4 5
Reversed Array:
5 4 3 2 1 
```

{% include expandable-code.html title="Solution" id="sol-6" file="code/week-10/solution-06.c" %}

---

## Question 5: Palindrome Check
Write a program that reads a string from the user, calculates its length `N`, and checks if it is a **Palindrome** (a string that reads the same from left to right and right to left).

**Example:**
```
Enter a string: racecar
The string is a Palindrome.
```

{% include expandable-code.html title="Solution" id="sol-7" file="code/week-10/solution-07.c" %}

---

## Question 6: What is the Output?
Determine the output of the following code snippet, which tests your understanding of function parameters (call by value and call by reference).

```c
#include <stdio.h>

int f1(int x, int y) {
    x = x + 2;
    y = y + 3;
    return x + y;
}

int f2(int *x, int y) {
    *x = *x + 2;
    y = y + 3;
    return *x + y;
}

int f3(int *x, int *y) {
    *x = *x + 2;
    *y = *y + 3;
    return *x + *y;
}

int f4(int x, int *y, int *z) {
    x = x + *y;
    *y = *z + 3;
    z = &x;
    *z = (*y) * 2;
    return *z;
}

int main() {
    int k = 3, m = 5, r = 0;

    printf("1) %d %d %d \n", k, m, r);

    r = f1(k, m);
    printf("2) %d %d %d \n", k, m, r);

    r = f2(&k, m);
    printf("3) %d %d %d \n", k, m, r);

    r = f3(&k, &m);
    printf("4) %d %d %d \n", k, m, r);

    r = f4(k, &m, &r);
    printf("5) %d %d %d \n", k, m, r);

    return 0;
}
```

{% include expandable-code.html title="Solution" id="sol-8" file="code/week-10/solution-08.c" %}

{% include week-nav.html prev_link="/notes/week-10/syntax/" prev_title="Syntax Guide" next_link="/notes/week-10/practice/" next_title="Practice" %}
