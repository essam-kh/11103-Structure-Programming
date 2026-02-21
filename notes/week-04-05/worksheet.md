---
layout: page
title: Week 4 & 5 Worksheet
parent: Week 4 & 5
nav_exclude: true
---

# Week 4 & 5 Programming Exercises

> **Note:** Try to solve these Exercises on your own before checking the solutions.
{: .note }

---

## Exercise 1: Divisors
Write a <span class="lang-c">C</span><span class="lang-cpp">C++</span> program that reads in a positive integer and prints all the divisors of the integer in **decreasing order**.

*   **Input**: A single positive integer.
*   **Output**: All divisors separated by spaces.

**Example:**
```
Enter a positive integer: 12
Divisors of 12 in decreasing order: 12 6 4 3 2 1 
```

{% include expandable-code.html title="Solution" id="sol-1" file_c="code/week-04-05/c/solution-01.c" file_cpp="code/week-04-05/cpp/solution-01.cpp" %}

---

## Exercise 2: Power Calculation
Write a <span class="lang-c">C</span><span class="lang-cpp">C++</span> program that reads in two positive integers `base` and `exp` and prints the result of:

$$ result = base^{exp} $$

In `main()`, you need to input the values for `base` and `exp`, calculate the power using a loop, and print the result.

**Example:**
```
Enter base and exponent: 2 5
2^5 = 32
```

{% include expandable-code.html title="Solution" id="sol-2" file_c="code/week-04-05/c/solution-02.c" file_cpp="code/week-04-05/cpp/solution-02.cpp" %}

---

## Exercise 3: Factorial
Write a <span class="lang-c">C</span><span class="lang-cpp">C++</span> program that reads in a positive integer `n` and prints the result of `n!` (Factorial), where:

$$ n! = 1 \times 2 \times \dots \times n $$

In `main()`, check if the number is negative (factorial doesn't exist), otherwise calculate and print the factorial.

**Example:**
```
Enter a positive integer: 5
5! = 120
```

{% include expandable-code.html title="Solution" id="sol-3" file_c="code/week-04-05/c/solution-03.c" file_cpp="code/week-04-05/cpp/solution-03.cpp" %}

---

## Exercise 4: Prime Check
Write a <span class="lang-c">C</span><span class="lang-cpp">C++</span> program that reads in an integer and checks whether the given number is **Prime** or not.

{: .tip }
> A **Prime Number** is a natural number greater than 1 that has no positive divisors other than 1 and itself.

In `main()`, read the number and use a flag or counter to determine if it has any divisors other than 1 and itself.

**Example 1:**
```
Enter an integer: 7
7 is a Prime number.
```

**Example 2:**
```
Enter an integer: 10
10 is not a Prime number.
```

{% include expandable-code.html title="Solution" id="sol-4" file_c="code/week-04-05/c/solution-04.c" file_cpp="code/week-04-05/cpp/solution-04.cpp" %}

---

## Exercise 5: Reverse Number
Write a <span class="lang-c">C</span><span class="lang-cpp">C++</span> program that reads a positive integer number and prints the number with its digits **reversed**.

**Example:**
```
Enter a number: 5892
Reversed number: 2985
```

Note: Your program should work for any number of digits.

{% include expandable-code.html title="Solution" id="sol-5" file_c="code/week-04-05/c/solution-05.c" file_cpp="code/week-04-05/cpp/solution-05.cpp" %}

---

## Exercise 6: Sum of Digits
Write a program that reads an integer number and prints the **sum of its digits**.

**Example:**
```
Enter an integer: 467
Sum of digits: 17
```
(Calculation: $$ 4 + 6 + 7 = 17 $$)

{% include expandable-code.html title="Solution" id="sol-6" file_c="code/week-04-05/c/solution-06.c" file_cpp="code/week-04-05/cpp/solution-06.cpp" %}

---

## Exercise 7: Range Printer
Write a function `printRange(int m, int n)` that prints all numbers from `m` to `n`.

*   The function should print an **error message** if $$ m > n $$.
*   **Challenge**: Try implementing this using `for`, `while`, and `do-while` loops.

In `main()`, input two integers from the keyboard and pass them to your function.

**Example:**
```
Enter m and n: 3 7
Expected output: 3 4 5 6 7 
```

{% include expandable-code.html title="Solution" id="sol-7" file_c="code/week-04-05/c/solution-07.c" file_cpp="code/week-04-05/cpp/solution-07.cpp" %}

---

## Exercise 8: Modular Functions
Write the following functions and call them from `main()`. **Do not use the `math.h` library.**

1.  `Power(float N, int M)`: Computes and returns $$ N^M $$.
2.  `DigitsNum(int N)`: Returns the **number of digits** in `N`.
3.  `DigitsAvg(int N)`: Returns the **average** of the digits of `N`.
4.  `IsPrimeEfficient(int N)`: Returns `1` if `N` is prime, and `0` otherwise.

In `main()`, you need to input values, call these functions, and print the results demonstrating they work.

**Example:**
```
Enter a float base and integer exponent for Power(): 2.5 3
Result: 15.62

Enter a positive integer for Digit operations and Prime check: 12345
Number of digits: 5
Average of digits: 3.00
12345 is Not Prime
```

{% include expandable-code.html title="Solution" id="sol-8" file_c="code/week-04-05/c/solution-08.c" file_cpp="code/week-04-05/cpp/solution-08.cpp" %}

---

## Tracing Exercises

## Exercise 9
What is the output of the following code?

<div class="lang-c" markdown="1">

```c
#include<stdio.h>
int main() {
    int myList[] = {0, 1, 2, 3, 4, 5};
    for (int i = 4; i >= 0; i--) {
        myList[i + 1] = myList[i];
    }
    for (int i = 0; i < 6; i++)
        printf("%d ", myList[i]);
    return 0;
}
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
#include<iostream>
using namespace std;
int main() {
    int myList[] = {0, 1, 2, 3, 4, 5};
    for (int i = 4; i >= 0; i--) {
        myList[i + 1] = myList[i];
    }
    for (int i = 0; i < 6; i++)
        cout << myList[i] << " ";
    return 0;
}
```

</div>
{% include expandable-code.html title="Solution" id="sol-9" file_c="code/week-04-05/c/solution-09.c" file_cpp="code/week-04-05/cpp/solution-09.cpp" %}

---

## Exercise 10
What is the value of `indexOfMax` after executing the following code?

<div class="lang-c" markdown="1">

```c
#include<stdio.h>
int main() {
    int myList[] = {1, 5, 5, 5, 5, 1};
    int max = myList[0];
    int indexOfMax = 0;
    for (int i = 1; i < 6; i++) {
        if (myList[i] > max) {
            max = myList[i];
            indexOfMax = i;
        }
    }
    printf("%d", indexOfMax);
    return 0;
}
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
#include<iostream>
using namespace std;
int main() {
    int myList[] = {1, 5, 5, 5, 5, 1};
    int max = myList[0];
    int indexOfMax = 0;
    for (int i = 1; i < 6; i++) {
        if (myList[i] > max) {
            max = myList[i];
            indexOfMax = i;
        }
    }
    cout << indexOfMax;
    return 0;
}
```

</div>
> **Think:** What would be the value of `indexOfMax` if the condition was `myList[i] >= max`?
{: .note }
{% include expandable-code.html title="Solution" id="sol-10" file_c="code/week-04-05/c/solution-10.c" file_cpp="code/week-04-05/cpp/solution-10.cpp" %}

---

## Exercise 11
Which of the following code segments produces the following output: `1 4 9 16 25`?

<div class="lang-c" markdown="1">

<div style="display: flex; gap: 20px;" markdown="1">
<div style="flex: 1;" markdown="1">
**a.** 
```c
int i = 0; 
while (i < 5) { 
    i = i + 1;
    printf("%d ", i * i);
}
```
</div>
<div style="flex: 1;" markdown="1">
**b.** 
```c
int i = 0; 
while (i <= 5) {
    i = i + 1;
    printf("%d ", i * i);
}
```
</div>
</div>

<div style="display: flex; gap: 20px;" markdown="1">
<div style="flex: 1;" markdown="1">
**c.** 
```c
int i = 0; 
while (i <= 5) {
    printf("%d ", i * i);
    i = i + 1;
}
```
</div>
<div style="flex: 1;" markdown="1">
**d.** 
```c
int i = 0; 
while (i < 5) {
    printf("%d ", i * i);
    i = i + 1;
}
```
</div>
</div>

</div>
<div class="lang-cpp" markdown="1">

<div style="display: flex; gap: 20px;" markdown="1">
<div style="flex: 1;" markdown="1">
**a.** 
```cpp
int i = 0; 
while (i < 5) { 
    i = i + 1;
    cout << i * i << " ";
}
```
</div>
<div style="flex: 1;" markdown="1">
**b.** 
```cpp
int i = 0; 
while (i <= 5) {
    i = i + 1;
    cout << i * i << " ";
}
```
</div>
</div>

<div style="display: flex; gap: 20px;" markdown="1">
<div style="flex: 1;" markdown="1">
**c.** 
```cpp
int i = 0; 
while (i <= 5) {
    cout << i * i << " ";
    i = i + 1;
}
```
</div>
<div style="flex: 1;" markdown="1">
**d.** 
```cpp
int i = 0; 
while (i < 5) {
    cout << i * i << " ";
    i = i + 1;
}
```
</div>
</div>

</div>
{% include expandable-code.html title="Solution" id="sol-11" file_c="code/week-04-05/c/solution-11.c" file_cpp="code/week-04-05/cpp/solution-11.cpp" %}

---

## Exercise 12
Which of the following code segments will **not** finish (go to infinite loop)?

<div class="lang-c" markdown="1">

<div style="display: flex; gap: 20px;" markdown="1">
<div style="flex: 1;" markdown="1">
**a.**
```c
int i = 1;
int j = 0;
while (i != 10) {
    j = i * 5;
    printf("%d", j);
    i = i + 1;
}
```
</div>
<div style="flex: 1;" markdown="1">
**b.**
```c
int i = 1;
int j = 0;
while (i != 10) {
    j = i * 5;
    printf("%d", j);
    i = i + 2;
}
```
</div>
</div>

<div style="display: flex; gap: 20px;" markdown="1">
<div style="flex: 1;" markdown="1">
**c.**
```c
int i = 1;
int j = 0;
while (i <= 10) {
    j = i * 3;
    printf("%d", j);
    i = i + 2;
}
```
</div>
<div style="flex: 1;" markdown="1">
**d.**
```c
int i = 1;
int j = 0;
while (i <= 10) {
    j = i * 3;
    printf("%d", j);
    i = i + 5;
}
```
</div>
</div>

</div>
<div class="lang-cpp" markdown="1">

<div style="display: flex; gap: 20px;" markdown="1">
<div style="flex: 1;" markdown="1">
**a.**
```cpp
int i = 1;
int j = 0;
while (i != 10) {
    j = i * 5;
    cout << j;
    i = i + 1;
}
```
</div>
<div style="flex: 1;" markdown="1">
**b.**
```cpp
int i = 1;
int j = 0;
while (i != 10) {
    j = i * 5;
    cout << j;
    i = i + 2;
}
```
</div>
</div>

<div style="display: flex; gap: 20px;" markdown="1">
<div style="flex: 1;" markdown="1">
**c.**
```cpp
int i = 1;
int j = 0;
while (i <= 10) {
    j = i * 3;
    cout << j;
    i = i + 2;
}
```
</div>
<div style="flex: 1;" markdown="1">
**d.**
```cpp
int i = 1;
int j = 0;
while (i <= 10) {
    j = i * 3;
    cout << j;
    i = i + 5;
}
```
</div>
</div>

</div>
{% include expandable-code.html title="Solution" id="sol-12" file_c="code/week-04-05/c/solution-12.c" file_cpp="code/week-04-05/cpp/solution-12.cpp" %}

---

## Exercise 13
What is the output of the following code? And what is the purpose of this code?

<div class="lang-c" markdown="1">

```c
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("new values: a = %d, b = %d\n", a, b);

    return 0;
}
```

</div>
<div class="lang-cpp" markdown="1">

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "new values: a = " << a << ", b = " << b << "\n";

    return 0;
}
```

</div>
{% include expandable-code.html title="Solution" id="sol-13" file_c="code/week-04-05/c/solution-13.c" file_cpp="code/week-04-05/cpp/solution-13.cpp" %}

---
{% include week-nav.html prev_link="/notes/week-04-05/syntax/" prev_title="Syntax Guide" next_link="/notes/week-04-05/practice/" next_title="Practice" %}
