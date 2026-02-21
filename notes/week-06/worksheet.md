---
layout: page
title: Week 6 Worksheet
parent: Week 6
nav_exclude: true
---

# Week 6 Programming Questions


## Exercise 1
Write a complete <span class="lang-c">C</span><span class="lang-cpp">C++</span> program that defines an integer array of size 50, and prompts the user to fill the array then print the array. After printing the array your program should also prompt the user enter `startValue`, and `endValue`. The program should print the number of values that are in between the value `startValue` and `endValue` inclusive where `startValue < endValue`.

**Example:**
```
Enter the number of elements (up to 50): 5
Enter 5 integers:
10 5 20 8 15
Array elements: 10 5 20 8 15 

Enter startValue and endValue: 5 12
Count of values between 5 and 12: 3
```

{% include expandable-code.html title="Solution" id="sol-1" file_c="code/week-06/c/solution-01.c" file_cpp="code/week-06/cpp/solution-01.cpp" %}

---

## Exercise 2
Write a complete <span class="lang-c">C</span><span class="lang-cpp">C++</span> program that defines an integer array of size 50, and prompts the user to fill the array with grades then print the array. Then compares the sum of even numbers in the array with the sum of odd numbers in the array.
*   If the sum of even numbers is larger, the program prints `1`.
*   If the sum of odd numbers is larger, the program prints `-1`.
*   If both sums are equal, the program prints `0`.

**Example:**
```
Enter the number of elements (up to 50): 4
Enter 4 grades:
2 3 4 1
Array elements: 2 3 4 1 
1
```

{% include expandable-code.html title="Solution" id="sol-2" file_c="code/week-06/c/solution-02.c" file_cpp="code/week-06/cpp/solution-02.cpp" %}

---

## Exercise 3
Write a complete <span class="lang-c">C</span><span class="lang-cpp">C++</span> program that defines an integer array of size 50, and prompts the user to fill the array with grades then print the array. Then program then prints the number of the elements in the array that are multiples of five.

**Example:**
```
Enter the number of elements (up to 50): 7
Enter 7 grades:
15 17 413 1005 3 70 2
Array elements: 15 17 413 1005 3 70 2 
Multiples of five: 15 1005 70 
Total count: 3
```

{% include expandable-code.html title="Solution" id="sol-3" file_c="code/week-06/c/solution-03.c" file_cpp="code/week-06/cpp/solution-03.cpp" %}

---

## Exercise 4
Write a complete <span class="lang-c">C</span><span class="lang-cpp">C++</span> program that defines two integer arrays each of size 50, the prompts the user to fill the arrays with integers. Then program prompts the user to enter the value of an integer variable named `Append`. The program should combine the arrays `A` & `B` and store the final results in `C` as follows:
*   If `Append` is equal to `1` the program appends `A` to `B`.
*   If `Append` is equal to `0` the function appends `B` to `A`.

**Example:**
```
Enter number of elements for A: 4
Enter elements for A:
10 20 30 2
Enter number of elements for B: 3
Enter elements for B:
2 34 8
Enter Append value (0 or 1): 1
Result Array C: 2 34 8 10 20 30 2 
```

{% include expandable-code.html title="Solution" id="sol-4" file_c="code/week-06/c/solution-04.c" file_cpp="code/week-06/cpp/solution-04.cpp" %}

---

## Exercise 5
Write a complete <span class="lang-c">C</span><span class="lang-cpp">C++</span> program that defines an integer array of size 50, and prompts the user to fill the array with quiz grades (between 0 and 10 inclusive). Then the program computes the frequency of each value in the array and prints the most frequent element.

**Example:**
```
Enter the number of elements (up to 50): 10
Enter 10 quiz grades (0-10):
5 8 5 9 5 8 10 5 7 5
Most frequent element is: 5 (appeared 5 times)
```

{% include expandable-code.html title="Solution" id="sol-5" file_c="code/week-06/c/solution-05.c" file_cpp="code/week-06/cpp/solution-05.cpp" %}

---

## Exercise 6
Write a complete <span class="lang-c">C</span><span class="lang-cpp">C++</span> program including a `main` and three functions named `Max`, `CountAbove`, and `IndexOf`.

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
Enter number of students (up to 70): 5
Enter grades:
50 85 40 90 85
Max Grade: 90
Second Max Grade: 85
Number of Passing Grades (>=50): 4
Enter a grade to find its index: 85
Index of 85: 1
Most Appeared Grade: 85
Grades entered: 50 85 40 90 85 

Filling new array with unique random numbers (0-100)...
12 5 23 8 19 
```

{% include expandable-code.html title="Solution" id="sol-6" file_c="code/week-06/c/solution-06.c" file_cpp="code/week-06/cpp/solution-06.cpp" %}


{% include week-nav.html prev_link="/notes/week-06/syntax/" prev_title="Syntax Guide" next_link="/notes/week-06/practice/" next_title="Practice" %}
