---
layout: page
title: Week 5 Worksheet
parent: Week 5
nav_exclude: true
---

# Week 5 Programming Questions


## Exercise 1
Write a complete C program that defines an integer array of size 50, and prompts the user to fill the array then print the array. After printing the array your program should also prompt the user enter `startValue`, and `endValue`. The program should print the number of values that are in between the value `startValue` and `endValue` inclusive where `startValue < endValue`.

**Example:**
```
Enter array size: 5
Enter element 0: 10
Enter element 1: 5
Enter element 2: 20
Enter element 3: 8
Enter element 4: 15
Array: 10 5 20 8 15 

Enter startValue: 5
Enter endValue: 12
Count of values between 5 and 12: 3
```

{% include expandable-code.html title="Solution" id="sol-1" file="code/week-05/solution-01.c" %}

---

## Exercise 2
Write a complete C program that defines an integer array of size 50, and prompts the user to fill the array with grades then print the array. Then compares the sum of even numbers in the array with the sum of odd numbers in the array.
*   If the sum of even numbers is larger, the program prints `1`.
*   If the sum of odd numbers is larger, the program prints `-1`.
*   If both sums are equal, the program prints `0`.

**Example:**
```
Enter array size: 4
Enter element 0: 2
Enter element 1: 3
Enter element 2: 4
Enter element 3: 1
Array: 2 3 4 1 

Sum of Evens: 6 (2+4)
Sum of Odds: 4 (3+1)
Result: 1
```

{% include expandable-code.html title="Solution" id="sol-2" file="code/week-05/solution-02.c" %}

---

## Exercise 3
Write a complete C program that defines an integer array of size 50, and prompts the user to fill the array with grades then print the array. Then program then prints the number of the elements in the array that are multiples of five.

**Example:**
```
Enter array size: 7
Enter elements: 15 17 413 1005 3 70 2
Array: 15 17 413 1005 3 70 2 

Count of multiples of 5: 3
Elements: 15, 1005, 70
```

{% include expandable-code.html title="Solution" id="sol-3" file="code/week-05/solution-03.c" %}

---

## Exercise 4
Write a complete C program that defines two integer arrays each of size 50, the prompts the user to fill the arrays with integers. Then program prompts the user to enter the value of an integer variable named `Append`. The program should combine the arrays `A` & `B` and store the final results in `C` as follows:
*   If `Append` is equal to `1` the program appends `A` to `B`.
*   If `Append` is equal to `0` the function appends `B` to `A`.

**Example:**
```
Array A: 10 20 30 2
Array B: 2 34 8 
Enter Append (0 or 1): 1

Array C: 2 34 8 10 20 30 2 
```

{% include expandable-code.html title="Solution" id="sol-4" file="code/week-05/solution-04.c" %}

---

## Exercise 5
Write a complete C program that defines an integer array of size 50, and prompts the user to fill the array with quiz grades (between 0 and 10 inclusive). Then the program computes the frequency of each value in the array and prints the most frequent element.

**Example:**
```
Enter array size: 10
Enter grades (0-10): 5 8 5 9 5 8 10 5 7 5
Most Frequent Grade: 5
Frequency: 5 times
```

{% include expandable-code.html title="Solution" id="sol-5" file="code/week-05/solution-05.c" %}

---

## Exercise 6
Write a complete C program including a `main` and three functions named `Max`, `CountAbove`, and `IndexOf`.

*   `Max()` takes an array of integer (`grades`) and its size as integer as input parameters and returns the maximum grade in the array as integer type.
*   `SecondMax()` takes an array of integer (`grades`) and its size as integer as input parameters and returns the second maximum grade in the array as integer type.
*   `CountAbove()` takes an array of integers, its size as integer, and a score value as integer input parameters and returns the number of grades in the array that are more or equal to the input score.
*   `IndexOf()` takes an array of integers, its size as integer, and a score value as integer input parameters and returns the location of the **first occurrence** of the input score. Location means index. If the value is not found, it should return `-1`.
*   `MostAppeared()` takes an array of integers, its size as integer input parameters and returns the value that is most appeared (occurred) within array elements.
*   `FillNoDuplicate()` takes an array of integers, its size, and `low` and `high` as integer input parameters. This function should fill the array with random numbers from `low` to `high` with **no duplications**.
*   `PrintGrade()` takes an array of integers, its size as integer input parameters. This function prints grade values.

**Main Function Logic:**
The `main()` defines an integer array of size 70 and read the grades values from the user. The main function then:
1.  Calls `Max` to find the maximum value.
2.  Calls `SecondMax` to find the second maximum.
3.  Calls `CountAbove` to compute the number of Passing grades (grades >= 50).
4.  Calls `IndexOf` to find out the location of a grade entered by the user.
5.  Calls `PrintGrade` to display the grades values.
6.  Calls `MostAppeared` to see which element appeared most.

Finally, define another array of size 70 and try to fill its values by using `FillNoDuplicate`, then call `PrintGrade` in order to see grades for this array.

**Example Run:**
```
Enter number of grades: 5
Enter grade 0: 50
Enter grade 1: 85
Enter grade 2: 40
Enter grade 3: 90
Enter grade 4: 85

Max Grade: 90
Second Max: 85
Passing Grades (>= 50): 4

Enter a grade to find index: 85
Found at index: 1

Grades: 50 85 40 90 85 
Most Frequent Grade: 85

Generating Random Unique Grades...
Random Grades: 12 5 23 8 19 ...
```

{% include expandable-code.html title="Solution" id="sol-6" file="code/week-05/solution-06.c" %}


{% include week-nav.html prev_link="/notes/week-05/syntax/" prev_title="Syntax Guide" next_link="/notes/week-05/practice/" next_title="Practice" %}
