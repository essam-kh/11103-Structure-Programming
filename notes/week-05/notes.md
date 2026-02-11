---
layout: page
title: Week 5 Notes
parent: Week 5
nav_exclude: true
---

# Structured Programming - Week 5 Notes


## Passing Arrays to Functions

*   Arrays by default are passed **by reference** (any change made on the array in the function will be reflected in the original array).
*   When you want to pass an array to a function, you have to specify the name of the array **without** `[]`.
*   You have to pass the **size** of the array to the function.
*   Passing an **element** of an array is considered as passing a variable (**by value**).

### Example

```c
int myArray[24];
myFunction(myArray, 24);
```

### Function Prototype

```c
void myFunction(int arr[], int size);
```

> **Note:** Parameter names are optional in function prototypes.
> ```c
> void myFunction(int [], int);
> ```
{: .note }
    
## Searching Arrays

We often need to search an array for a specific "key" value.

### 1. Linear Search
*   **Simple**: Compares each element of the array with the key value.
*   **Use Case**: Useful for **small** and **unsorted** arrays.

### 2. Binary Search
*   **Requirement**: The array **must be sorted**.
*   **Method**: Compares the **middle** element with the key.
    *   If equal, match found.
    *   If `key < middle`, looks in the **first half** of the array.
    *   If `key > middle`, looks in the **last half** of the array.
    *   Repeat until found or empty.
*   **Performance**: Very fast; at most **n** steps, where 2<sup>n</sup> > number of elements.
    *   *Example*: A 30-element array takes at most **5 steps** (2<sup>5</sup> = 32 > 30).



## Array Manipulation

### 1. Reversing an Array
Reversing an array involves swapping the first element with the last, the second with the second-to-last, and so on, until the middle is reached.

*   **Logic:**
    *   Use two indices: `start` (0) and `end` (size - 1).
    *   Swap `arr[start]` and `arr[end]`.
    *   Increment `start`, decrement `end`.
    *   Repeat while `start < end`.

```c
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        // Swap
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move indices
        start++;
        end--;
    }
}
```

### 2. Array Rotation
Rotating an array means moving elements towards one end, where elements that fall off one end reappear at the other.

<div style="display: flex; gap: 20px;" markdown="1">
<div style="flex: 1;" markdown="1">

**Right Rotation:**

```c
void rotateRight(int arr[], int size) {
    int last = arr[size - 1];
    
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[0] = last;
}
```
</div>

<div style="flex: 1;" markdown="1">

**Left Rotation:**
```c
void rotateLeft(char arr[], int size) {
    char first = arr[0];
    
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    arr[size - 1] = first;
}
```
</div>
</div>

<img src="{{ site.baseurl }}/assets/images/rotation.png" alt="Array Rotation" style="display: block; margin: 0 auto; max-width: 60%; height: auto;">

{% include week-nav.html next_link="/notes/week-05/syntax/" next_title="Syntax Guide" %}
