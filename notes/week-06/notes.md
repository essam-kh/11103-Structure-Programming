---
layout: page
title: Week 6 Notes
parent: Week 6
nav_exclude: true
---

# Structured Programming - Week 6 Notes

## Nested Loops & 2D Arrays

### Introduction to Nested Loops

While a single loop is efficient for linear tasks, many problems require working in multiple dimensions or layers. Imagine a clock: the second hand must complete a full circle (60 ticks) for the minute hand to move just one step. This logic is implemented using **Nested Loops** in C.

By placing one loop inside another, a program can process complex structures like grids, tables, and patterns, where the inner loop completes an entire cycle for every single iteration of the outer loop.

```c
for(int i = 0 ; i <= n ; i++){
    for(int j = 0 ; j <= m ; j++){
        // code to be repeated
    }
}
```

> **Note**: For independent nested loops (where the inner loop's range doesn't depend on the outer loop), the total number of operations is `Outer_Iterations * Inner_Iterations`.
{: .note }

## Stars Pattern

<div style="display: flex; gap: 20px; align-items: flex-start;" markdown="1">
<div style="flex: 1;" markdown="1">

**Pattern 1:**
```c
for(int i = 1 ; i <= n ; i++){
    for(int j = 1 ; j <= i ; j++){
        printf("*");
    }
    printf("\n");
}
```
</div>
<div style="flex: 1;" markdown="1">

**Output:**
```
*
**
***
****
*****
```
</div>
</div>

<div style="display: flex; gap: 20px; align-items: flex-start;" markdown="1">
<div style="flex: 1;" markdown="1">

**Pattern 2:**
```c
for(int i = 1 ; i <= n ; i++){
    for(int j = 1 ; j <= n - i ; j++){
        printf(" ");
    }
    for(int j = 1 ; j <= i ; j++){
        printf("*");
    }
    printf("\n");
}
```
</div>
<div style="flex: 1;" markdown="1">

**Output:**
```
            *
           **
          ***
         ****
        *****
```
</div>
</div>

<div style="display: flex; gap: 20px; align-items: flex-start;" markdown="1">
<div style="flex: 1;" markdown="1">

**Pattern 3:**
```c
for(int i = 1 ; i <= n ; i++){
    for(int j = 1 ; j <= n - i; j++){
        printf("*");
    }
    printf("\n");
}
```
</div>
<div style="flex: 1;" markdown="1">

**Output:**
```
*****
****
***
**
*
```
</div>
</div>

<div style="display: flex; gap: 20px; align-items: flex-start;" markdown="1">
<div style="flex: 1;" markdown="1">

**Pattern 4:**
```c
for(int i = 1 ; i <= n ; i++){
    for(int j = 1 ; j < i ; j++){
        printf(" ");
    }
    for(int j = i ; j <= n ; j++){
        printf("*");
    }
    printf("\n");
}
```
</div>
<div style="flex: 1;" markdown="1">

**Output:**
```
        *****
         ****
          ***
           **
            *
```
</div>
</div>

---

## Sorting Arrays

### Bubble Sort (Sinking Sort)
In Bubble Sort, adjacent elements are compared and swapped if they are in the wrong order.

*   **Logic:**
    *   Compare `arr[i]` and `arr[i+1]`.
    *   If `arr[i] >= arr[i+1]`, swap them.
    *   Repeat process.

**Example:**
```
5 1 6 2 8
1 5 6 2 8  (1<5, swap)
1 5 6 2 8  (5<6, no swap)
1 5 2 6 8  (2<6, swap)
1 2 5 6 8  (2<5, swap)
```

**Code:**
```c
void bubbleSort(int arr[], int n){
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(arr[j] >= arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                // swap(arr[j], arr[j+1]);
            }
        }
    }
}
```

---

## Introduction to 2D Arrays

While standard arrays allow you to store data in a single linear list, real-world information is often organized in a grid. Just as a spreadsheet has rows and columns, or a cinema has seating arrangements, programming often requires a table-like structure. This logic is implemented using **2D Arrays (Matrices)** in C, which can be thought of essentially as an "array of arrays".

### Defining 2D Arrays

```c
DataType arr[ROWS][COLS];
```

We access elements in 2D arrays using two indices:
```c
arr[i][j]; // arr[3][4] means 4th element in 3rd row
```

### Initializing 2D Arrays

```c
int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};
```

> **Note**: For number arrays, if all components of a row are not specified, the unspecified components are initialized to zero.
{: .note }

## Processing 2D Arrays

A two-dimensional array can be processed in three different ways:
1.  **Process the entire array**
2.  **Row Processing**: Process a particular row.
3.  **Column Processing**: Process a particular column.

> **Note**: Each Row/Column is considered as a 1D array.
{: .note }

### Example 1: Reading and Printing a 2D Array

This example demonstrates how to use nested loops to fill a 2D array from user input and then display it in a grid format.

```c
#include <stdio.h>

int main() {
    int rows = 2, cols = 3;
    int matrix[2][3];

    // Reading elements
    printf("Enter elements for a 2x3 matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Printing elements
    printf("\nThe Matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]); 
        }
        printf("\n"); // New line after each row
    }

    return 0;
}
```

**Output:**
```
Enter elements for a 2x3 matrix:
Enter element [0][0]: 1
Enter element [0][1]: 2
Enter element [0][2]: 3
Enter element [1][0]: 4
Enter element [1][1]: 5
Enter element [1][2]: 6

The Matrix is:
1 2 3 
4 5 6 
```

### Example 2: Student Marks (Row Processing)

In this example, we process the array **row by row**. We have 3 students, and each student has 4 marks. We want to calculate the total and average score for each student.

```c
#include <stdio.h>

int main() {
    int marks[3][4]; // 3 Students, 4 Marks each

    // 1. Read Marks
    for (int i = 0; i < 3; i++) {
        printf("Enter 4 marks for Student %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    // 2. Process and Print Results
    printf("\nResults:\n");
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += marks[i][j]; // Summing marks for current student
        }
        
        float avg = (float)sum / 4.0;
        printf("Student %d: Sum = %d, Average = %.2f\n", i + 1, sum, avg);
    }

    return 0;
}
```

**Output:**
```
Enter 4 marks for Student 1: 90 85 88 92
Enter 4 marks for Student 2: 70 75 60 80
Enter 4 marks for Student 3: 100 95 98 90

Results:
Student 1: Sum = 355, Average = 88.75
Student 2: Sum = 285, Average = 71.25
Student 3: Sum = 383, Average = 95.75
```

{% include week-nav.html next_link="/notes/week-06/syntax/" next_title="Syntax Guide" %}
