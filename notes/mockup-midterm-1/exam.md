---
layout: page
title: Mockup Midterm Exam 1
nav_exclude: true
---

# Mockup Midterm Exam 1

## Question 1

What is the output of the following program?

<div class="lang-c" markdown="1">
```c
#include<stdio.h>
int a=21,b=8,k=1;
void fun(int b){
    for(int i=2;i<=a;i++){
        if(a%i==0 && i%2){
            k=i;
        }
    }
    printf("k: %d\n",k);
    b/=3;
}
int main(){
    int z=0;
    for(int i=0;i<5;i++){
        if(i%2){
            fun(a);
            a/=k;
            printf("a: %d\n",a);
        }
        else{
            fun(b);
            b/=k;
            printf("b: %d\n",b);
        }
        z+=a;
    }
    printf("z: %d\n",z);
    return 0;
}
```

</div>

<div class="lang-cpp" markdown="1">
```cpp
#include <iostream>
using namespace std;

int a=21,b=8,k=1;
void fun(int b){
    for(int i=2;i<=a;i++){
        if(a%i==0 && i%2){
            k=i;
        }
    }
    cout << "k: " << k << endl;
    b/=3;
}
int main(){
    int z=0;
    for(int i=0;i<5;i++){
        if(i%2){
            fun(a);
            a/=k;
            cout << "a: " << a << endl;
        }
        else{
            fun(b);
            b/=k;
            cout << "b: " << b << endl;
        }
        z+=a;
    }
    cout << "z: " << z << endl;
    return 0;
}
```
</div>

## Question 2

Write a function that takes an array of non-negative integers and its size as parameters, and moves all the `0`s to the end of the array. You must modify the array in-place without defining a new array.

<div class="lang-c" markdown="1">
```c
void moveZeros(int arr[], int size) {
    // Write your code here
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
void moveZeros(int arr[], int size) {
    // Write your code here
}
```
</div>

## Question 3

Write a function that takes a character array and its size as parameters. The function should return `1` (true) if the characters in the array can be reordered to form an **even-length** palindrome, and `0` (false) otherwise. 

Consider the following examples to deduce the exact matching behavior:
- Input: `['A', 'a']` -> Returns `1`
- Input: `['n', 'A', 'n', 'a']` -> Returns `1`
- Input: `['a']` -> Returns `0`
- Input: `['a', 'b', 'c', 'a']` -> Returns `0`

<div class="lang-c" markdown="1">
```c
int isEvenPal(char arr[], int size) {
    // Write your code here
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
bool isEvenPal(char arr[], int size) {
    // Write your code here
}
```
</div>

## Question 4

Write a function that takes an integer array and its size as parameters. The function should return `1` (true) if the sum of the elements at even indices (0, 2, 4, ...) is at least double the sum of the elements at odd indices (1, 3, 5, ...), and `0` (false) otherwise.

<div class="lang-c" markdown="1">
```c
int checkSumCondition(int arr[], int size) {
    // Write your code here
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
bool checkSumCondition(int arr[], int size) {
    // Write your code here
}
```
</div>

## Question 5

Write a program within the `main` function to solve the following problem. Given an array of integers with a maximum size of 100, distribute its elements into three separate arrays based on the following conditions:
- `mod2`: contains numbers divisible by 2
- `mod3`: contains numbers divisible by 3
- `mod2_3`: contains numbers divisible by both 2 and 3

<div class="lang-c" markdown="1">
```c
int main() {
    int arr[100];
    int size;
    // Assume arr and size are already initialized with input data.
    
    // Write your code here
    
    return 0;
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
int main() {
    int arr[100];
    int size;
    // Assume arr and size are already initialized with input data.
    
    // Write your code here
    
    return 0;
}
```
</div>

## Question 6

**Part A**: Convert the following `if-else` block into an equivalent `switch` statement.

<div class="lang-c" markdown="1">
```c
if (grade == 'A') {
    printf("Excellent\n");
} else if (grade == 'B') {
    printf("Good\n");
} else if (grade == 'C') {
    printf("Average\n");
} else if (grade == 'D' || grade == 'F') {
    printf("Poor\n");
} else {
    printf("Invalid grade\n");
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
if (grade == 'A') {
    cout << "Excellent\n";
} else if (grade == 'B') {
    cout << "Good\n";
} else if (grade == 'C') {
    cout << "Average\n";
} else if (grade == 'D' || grade == 'F') {
    cout << "Poor\n";
} else {
    cout << "Invalid grade\n";
}
```
</div>

**Part B**: Convert the following `switch` statement into an equivalent `if-else` block.

<div class="lang-c" markdown="1">
```c
switch (day) {
    case 1:
    case 7:
        printf("Weekend\n");
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Weekday\n");
        break;
    default:
        printf("Invalid day\n");
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
switch (day) {
    case 1:
    case 7:
        cout << "Weekend\n";
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        cout << "Weekday\n";
        break;
    default:
        cout << "Invalid day\n";
}
```
</div>

{% include week-nav.html next_link="/notes/mockup-midterm-1/solutions/" next_title="Solutions" %}
