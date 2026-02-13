---
layout: page
title: Week 6 Syntax
parent: Week 6
nav_exclude: true
---

# Week 6 Syntax Guide

## Nested Loops

A loop inside another loop. The inner loop completes all its iterations for every single iteration of the outer loop.

**Syntax:**
```c
for (int i = 0; i < outerLimit; i++) {       // Outer Loop
    for (int j = 0; j < innerLimit; j++) {   // Inner Loop
        // Code to run
    }
}
```

**Example:**
```c
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 2; j++) {
        printf("i=%d, j=%d\n", i, j);
    }
}
```

---

## 2D Arrays

A 2D array is essentially a matrix with rows and columns.

### 1. Declaration

**Syntax:**
```c
DataType arrayName[rows][columns];
```

**Example:**
```c
int matrix[3][4]; // 3 rows, 4 columns
```

### 2. Initialization

**Method A: Nested Braces (Recommended)**
```c
int matrix[2][3] = {
    {1, 2, 3},  // Row 0
    {4, 5, 6}   // Row 1
};
```

**Method B: Linear List**
```c
int matrix[2][3] = {1, 2, 3, 4, 5, 6}; // Fills row by row
```

**Method C: Partial Initialization**
```c
int matrix[2][3] = {
    {1},    // Becomes {1, 0, 0}
    {4, 5}  // Becomes {4, 5, 0}
};
```

### 3. Accessing Elements

**Syntax:**
```c
arrayName[rowIndex][colIndex] = value;
```

**Example:**
```c
matrix[0][1] = 10;      // Assigns 10 to row 0, col 1
int x = matrix[1][2];   // Reads value from row 1, col 2
```

---

## Processing 2D Arrays

We use nested loops to iterate through 2D arrays.

**Common Pattern (Row-Major Order):**
```c
for (int i = 0; i < rows; i++) {           // Iterate Rows
    for (int j = 0; j < cols; j++) {       // Iterate Columns
        printf("%d ", matrix[i][j]);       // Process Element
    }
    printf("\n");
}
```

{% include week-nav.html prev_link="/notes/week-06/notes/" prev_title="Lecture Notes" next_link="/notes/week-06/worksheet/" next_title="Worksheet" %}
