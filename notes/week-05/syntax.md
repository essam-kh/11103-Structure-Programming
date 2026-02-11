---
layout: page
title: Week 5 Syntax
parent: Week 5
nav_exclude: true
---

# Week 5 Syntax Guide

## Passing Arrays to Functions

When passing an array to a function, the array "decays" into a pointer to its first element. Changes inside the function affect the original array.

**Syntax:**
```c
// Function Prototype
void functionName(dataType arrayName[], int size);

// Function Call
functionName(actualArray, size);
```

**Example:**
```c
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int nums[5] = {1, 2, 3, 4, 5};
    printArray(nums, 5); // Pass array name and size
    return 0;
}
```

---

## Searching Algorithms

### Linear Search
Iterates through the array to find a specific key. Works on unsorted arrays.

**Syntax:**
```c
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}
```

### Binary Search
Divides the search interval in half. **Requires a sorted array.**

**Syntax:**
```c
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == key)
            return mid; // Match found
            
        if (arr[mid] < key)
            low = mid + 1; // Ignore left half
        else
            high = mid - 1; // Ignore right half
    }
    
    return -1; // Not found
}
```

---

## Common Array Algorithms

### Reversing an Array
Swaps elements from both ends moving towards the center.

**Syntax:**
```c
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
```

### Rotating an Array
Moves elements to the right or left, wrapping around.

<div style="display: flex; gap: 20px;" markdown="1">
<div style="flex: 1;" markdown="1">

**Rotate Right:**
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

**Rotate Left:**
```c
void rotateLeft(int arr[], int size) {
    int first = arr[0];
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = first;
}
```
</div>
</div>

{% include week-nav.html prev_link="/notes/week-05/notes/" prev_title="Lecture Notes" next_link="/notes/week-05/worksheet/" next_title="Worksheet" %}
