---
layout: page
title: Week 6 Worksheet
parent: Week 6
nav_exclude: true
---

# Week 6 Worksheet

## Question 1
What is the output of the following nested loop in terms of `N`?

```c
for (int i = 15 ; i <= n; i++) {
    for (int j = 10; j <= n/2; j+=2) {
        // Body
    }
}
```

{% include expandable-code.html title="Solution" id="sol-1" file="code/week-06/solution-01.c" %}

---

## Question 2
What is the output of the following nested loop in terms of `N`?

```c
for (int i = 1000; i <= 500; i-=25) {
    for (int j = 0; j <= 200; j++) {
        // Body
    }
}
```

{% include expandable-code.html title="Solution" id="sol-2" file="code/week-06/solution-02.c" %}

---

## Question 3
Write a program that asks the user for a size `N` and prints a **Hollow Square** of asterisks (`*`) of size `N x N`.

**Example:**
```
Enter size: 5
*****
*   *
*   *
*   *
*****
```

{% include expandable-code.html title="Solution" id="sol-3" file="code/week-06/solution-03.c" %}

---

## Question 4
Write a program that asks the user for the size `N` of a square matrix, reads the matrix elements, and then prints the elements of the **Main Diagonal** with their spatial positioning.

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

{% include expandable-code.html title="Solution" id="sol-4" file="code/week-06/solution-04.c" %}

---

## Question 5
Write a program that asks the user for the size `N` of a square matrix, reads the matrix elements, and then prints the elements of the **Cross Diagonal** (Anti-Diagonal) with their spatial positioning.

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

{% include expandable-code.html title="Solution" id="sol-5" file="code/week-06/solution-05.c" %}

---

## Question 6
Write a C program to read elements in two matrices and multiply them. The program should check if the dimensions allow for multiplication (Columns of A = Rows of B).

<div style="text-align:center">
<img src="{{ site.baseurl }}/assets/images/matrix-multiplication.png" alt="Matrix Multiplication" style="max-width: 600px; margin: 20px 0;">
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

{% include expandable-code.html title="Solution" id="sol-6" file="code/week-06/solution-06.c" %}

---

## Question 7
Write a program that asks the user for the dimensions of a matrix, reads the **positive** elements, and calculates the **Sum** of all elements, and for each column, the **Maximum** element, the **Average** of elements, and the most **Frequent** element.

> **Note**: If more than one element has the same highest frequency, print the **smallest** one.
{: .note }

**Example:**
```
Enter rows and columns: 2 3

Enter matrix elements:
2 5 2
2 1 9

Sum of all elements: 21
Column 1: Max = 2, Average = 2.00, Mode = 2
Column 2: Max = 5, Average = 3.00, Mode = 1
Column 3: Max = 9, Average = 5.50, Mode = 2
```

{% include expandable-code.html title="Solution" id="sol-7" file="code/week-06/solution-07.c" %}

{% include week-nav.html prev_link="/notes/week-06/syntax/" prev_title="Syntax Guide" next_link="/notes/week-06/practice/" next_title="Practice" %}
