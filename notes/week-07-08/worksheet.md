---
layout: page
title: Week 7 & 8 Worksheet
parent: Week 7 & 8
nav_exclude: true
---

# Week 7 & 8 Worksheet

## Question 1
What is the total number of times the body executes in the following nested loop?

```c
for (int i = 15; i <= 40; i++) {
    for (int j = 10; j <= 20; j += 2) {
        // Body
    }
}
```

{% include expandable-code.html title="Solution" id="sol-1" file_c="code/week-07-08/c/solution-01.c" file_cpp="code/week-07-08/cpp/solution-01.cpp" %}

---

## Question 2
What is the total number of times the body executes in the following nested loop?

```c
for (int i = 1000; i > 500; i -= 25) {
    for (int j = 0; j < 200; j++) {
        // Body
    }
}
```

{% include expandable-code.html title="Solution" id="sol-2" file_c="code/week-07-08/c/solution-02.c" file_cpp="code/week-07-08/cpp/solution-02.cpp" %}

---

## Question 3
Write a <span class="lang-c">C</span><span class="lang-cpp">C++</span> program that asks the user for a size `N` and prints a **Hollow Square** of asterisks (`*`) of size `N x N`.

**Example:**
```
Enter size: 5
*****
*   *
*   *
*   *
*****
```

{% include expandable-code.html title="Solution" id="sol-3" file_c="code/week-07-08/c/solution-03.c" file_cpp="code/week-07-08/cpp/solution-03.cpp" %}

---

## Question 4
Write a <span class="lang-c">C</span><span class="lang-cpp">C++</span> program that asks the user for the size `N` of a square matrix, reads the matrix elements, and then prints the elements of the **Main Diagonal** with their spatial positioning.

**Example:**
```
Enter size of square matrix: 3
Enter elements:
1 2 3
4 5 6
7 8 9

Main Diagonal:
1
 5
  9 
```

{% include expandable-code.html title="Solution" id="sol-4" file_c="code/week-07-08/c/solution-04.c" file_cpp="code/week-07-08/cpp/solution-04.cpp" %}

---

## Question 5
Write a <span class="lang-c">C</span><span class="lang-cpp">C++</span> program that asks the user for the size `N` of a square matrix, reads the matrix elements, and then prints the elements of the **Cross Diagonal** (Anti-Diagonal) with their spatial positioning.

**Example:**
```
Enter size of square matrix: 3
Enter elements:
1 2 3
4 5 6
7 8 9

Cross Diagonal:
  3
 5
7 
```

{% include expandable-code.html title="Solution" id="sol-5" file_c="code/week-07-08/c/solution-05.c" file_cpp="code/week-07-08/cpp/solution-05.cpp" %}

---

## Question 6
Write a <span class="lang-c">C</span><span class="lang-cpp">C++</span> program to read elements in two matrices and multiply them. The program should check if the dimensions allow for multiplication (Columns of A = Rows of B).

<div style="text-align:center">
<img src="{{ site.baseurl }}/assets/images/content/matrix-multiplication.png" alt="Matrix Multiplication" style="max-width: 600px; margin: 20px 0;">
</div>

**Example:**
```
Enter rows and columns for Matrix A: 2 2
Enter rows and columns for Matrix B: 2 2
Enter elements of Matrix A:
1 2
3 4
Enter elements of Matrix B:
1 1
1 1
Result Matrix:
3 3 
7 7 
```

{% include expandable-code.html title="Solution" id="sol-6" file_c="code/week-07-08/c/solution-06.c" file_cpp="code/week-07-08/cpp/solution-06.cpp" %}

---

## Question 7
Write a <span class="lang-c">C</span><span class="lang-cpp">C++</span> program that reads a 3×4 matrix from the user, then uses **two separate functions** — `printMatrix` to display it and `sumMatrix` to compute and return the total of all elements — and prints the result in `main`.

**Example:**
```
Enter elements of the 3x4 matrix:
1 2 3 4
5 6 7 8
9 10 11 12

Matrix:
1 2 3 4 
5 6 7 8 
9 10 11 12 

Sum of all elements: 78
```

{% include expandable-code.html title="Solution" id="sol-7" file_c="code/week-07-08/c/solution-07.c" file_cpp="code/week-07-08/cpp/solution-07.cpp" %}

---

## Question 8
Write a <span class="lang-c">C</span><span class="lang-cpp">C++</span> program that reads a 3×4 matrix from the user and uses a function `countEvens` to count and return the number of **even** elements in the matrix. Print the result in `main`.

**Example:**
```
Enter elements of the 3x4 matrix:
1 2 3 4
5 6 7 8
9 10 11 12

Number of even elements: 6
```

{% include expandable-code.html title="Solution" id="sol-8" file_c="code/week-07-08/c/solution-08.c" file_cpp="code/week-07-08/cpp/solution-08.cpp" %}

{% include week-nav.html prev_link="/notes/week-07-08/syntax/" prev_title="Syntax Guide" next_link="/notes/week-07-08/practice/" next_title="Practice" %}

