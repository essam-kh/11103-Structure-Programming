---
layout: page
title: Mockup Midterm Exam 2
nav_exclude: true
---

# Mockup Midterm Exam 2

## Question 1

What is the output of the following program?

<div class="lang-c" markdown="1">
```c
#include<stdio.h>
int a=42,b=30,k=1;
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

int a=42,b=30,k=1;
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

Write a function that reverses the elements of an integer array in-place. You must not define a new array.

```c
void reverseArray(int arr[], int size) {
    // Write your code here
}
```

## Question 3

Write a function `isAnagram` that takes two character arrays (strings) and their sizes, and returns `1` in C (or `true` in C++) if they are anagrams (meaning you can reorder the characters of `str1` such that it equals `str2`), ignoring uppercase and lowercase differences.

<div class="lang-c" markdown="1">
```c
int isAnagram(char str1[], int size1, char str2[], int size2) {
    // Write your code here
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
bool isAnagram(char str1[], int size1, char str2[], int size2) {
    // Write your code here
}
```
</div>

## Question 4

Write a function that finds and returns the first non-repeating character in a string. You may assume the string only contains alphabetical characters. If there is no non-repeating character, return `\0`.

```c
char firstUniqueChar(char str[], int size) {
    // Write your code here
}
```

## Question 5

Write a program within the `main` function to solve the following problem. Given an array of integers with a maximum size of 100, compute the average of all numbers in the array. Then, distribute its elements into two separate arrays: 
- `aboveAvg`: contains numbers strictly greater than the average
- `belowAvg`: contains numbers less than or equal to the average

```c
int main() {
    int arr[100];
    int size;
    // Assume arr and size are already initialized with input data.
    
    // Write your code here
    
    return 0;
}
```

## Question 6

**Part A**
Convert the following `if-else` chain representing a simple ATM menu into a `switch` statement.

<div class="lang-c" markdown="1">
```c
if (choice == 1) {
    printf("Check Balance\n");
} else if (choice == 2) {
    printf("Withdraw\n");
} else if (choice == 3) {
    printf("Deposit\n");
} else if (choice == 4) {
    printf("Exit\n");
} else {
    printf("Invalid Choice\n");
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
if (choice == 1) {
    cout << "Check Balance\n";
} else if (choice == 2) {
    cout << "Withdraw\n";
} else if (choice == 3) {
    cout << "Deposit\n";
} else if (choice == 4) {
    cout << "Exit\n";
} else {
    cout << "Invalid Choice\n";
}
```
</div>

**Part B**
Convert the following `switch` statement representing a traffic light into an `if-else` chain.

<div class="lang-c" markdown="1">
```c
switch (light) {
    case 'R':
    case 'r':
        printf("Stop\n");
        break;
    case 'Y':
    case 'y':
        printf("Wait\n");
        break;
    case 'G':
    case 'g':
        printf("Go\n");
        break;
    default:
        printf("Invalid Color\n");
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
switch (light) {
    case 'R':
    case 'r':
        cout << "Stop\n";
        break;
    case 'Y':
    case 'y':
        cout << "Wait\n";
        break;
    case 'G':
    case 'g':
        cout << "Go\n";
        break;
    default:
        cout << "Invalid Color\n";
}
```
</div>

{% include week-nav.html next_link="/notes/mockup-midterm-2/solutions/" next_title="Solutions" %}
