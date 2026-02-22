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

<div class="lang-c" markdown="1">

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

</div>
<div class="lang-cpp" markdown="1">

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numbers[5];
    int sum = 0;
    float average;

    cout << "Enter 5 numbers: ";

    // Loop to read input
    for (int i = 0; i <= 5; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    // Calculate average
    average = sum / 5; 

    // Print the result
    cout << "The average is " << average << "\n"

    // Check for perfect score
    if (average = 100) {
        cout << "Perfect Score!\n";
    }

    // End message
    cout << Program Ended;

    return 0;
}
```

</div>

{% include expandable-code.html title="Solution (Part 1)" id="sol-1" file_c="code/week-10/c/solution-01.c" file_cpp="code/week-10/cpp/solution-01.cpp" %}

### Part 2

<div class="lang-c" markdown="1">

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

</div>
<div class="lang-cpp" markdown="1">

```cpp
#include <iostream>
using namespace std;

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
    cout << x << " + " << y << " = " << result << "\n";
}
```

</div>

{% include expandable-code.html title="Solution (Part 2)" id="sol-2" file_c="code/week-10/c/solution-02.c" file_cpp="code/week-10/cpp/solution-02.cpp" %}

---

## Question 2: What is the Output?
Determine the output of the following code snippet:

<div class="lang-c" markdown="1">

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

</div>
<div class="lang-cpp" markdown="1">

```cpp
int x;
int y;
int *p = &x;
int *q = &y;

*p = 35;
*q = 98;
*p = *q;

cout << x << "  " << y << "  " << *p << "  " << *q;
```

</div>

{% include expandable-code.html title="Solution" id="sol-3" file_c="code/week-10/c/solution-03.c" file_cpp="code/week-10/cpp/solution-03.cpp" %}

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

{% include expandable-code.html title="Solution (Part 1)" id="sol-4" file_c="code/week-10/c/solution-04.c" file_cpp="code/week-10/cpp/solution-04.cpp" %}


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

{% include expandable-code.html title="Solution (Part 2)" id="sol-5" file_c="code/week-10/c/solution-05.c" file_cpp="code/week-10/cpp/solution-05.cpp" %}

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

{% include expandable-code.html title="Solution" id="sol-6" file_c="code/week-10/c/solution-06.c" file_cpp="code/week-10/cpp/solution-06.cpp" %}

---

## Question 5: Palindrome Check
Write a program that reads a string from the user, calculates its length `N`, and checks if it is a **Palindrome** (a string that reads the same from left to right and right to left).

**Example:**
```
Enter a string: racecar
The string is a Palindrome.
```

{% include expandable-code.html title="Solution" id="sol-7" file_c="code/week-10/c/solution-07.c" file_cpp="code/week-10/cpp/solution-07.cpp" %}

---

## Question 6: What is the Output?
Determine the output of the following code snippet, which tests your understanding of function parameters (call by value and call by reference).

<div class="lang-c" markdown="1">

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

</div>
<div class="lang-cpp" markdown="1">

```cpp
#include <iostream>
using namespace std;

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

    cout << "1) " << k << " " << m << " " << r << " \n";

    r = f1(k, m);
    cout << "2) " << k << " " << m << " " << r << " \n";

    r = f2(&k, m);
    cout << "3) " << k << " " << m << " " << r << " \n";

    r = f3(&k, &m);
    cout << "4) " << k << " " << m << " " << r << " \n";

    r = f4(k, &m, &r);
    cout << "5) " << k << " " << m << " " << r << " \n";

    return 0;
}
```

</div>

{% include expandable-code.html title="Solution" id="sol-8" file_c="code/week-10/c/solution-08.c" file_cpp="code/week-10/cpp/solution-08.cpp" %}

---

## Question 7: Remove Commas
Write a <span class="lang-c">C</span><span class="lang-cpp">C++</span> function called `RemoveCommas`. The function receives two Strings in the form of character pointers as the following: `void RemoveCommas(char * oldval, char * newval)`.

Your function should generate a new string called `newval` out of `oldval` by removing all the commas in `oldval`.

**Example:**
Given the following code:
```c
char FilteredName[20];
RemoveCommas("v1,v2,v3", FilteredName);
```
It should store the value `"v1v2v3"` inside `FilteredName`.

**Constraints:**
- You are not allowed to use arrays inside your function, only character pointers.

{% include expandable-code.html title="Solution" id="sol-9" file_c="code/week-10/c/solution-09.c" file_cpp="code/week-10/cpp/solution-09.cpp" %}

{% include week-nav.html prev_link="/notes/week-10/syntax/" prev_title="Syntax Guide" next_link="/notes/week-10/practice/" next_title="Practice" %}
