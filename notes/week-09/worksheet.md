---
layout: page
title: Week 9 Worksheet
parent: Week 9
nav_exclude: true
---

# Week 9 Worksheet

> **Note:** Try to solve these questions on your own.
{: .note }

## Exercise 1: Palindrome Check
Write a recursive function named `isPalindrome()`, which receives a string and checks if it checks if a given string is a palindrome (reads the same forwards and backwards).

The function should take the string and relevant indices (start and end) as arguments and return `1` (true) or `0` (false).

In `main()`, you need to input a word from the user and pass it to the function, then display "Yes" if it is a palindrome and "No" otherwise.

**Example:**
```
Enter a word: racecar
Result: The word is a Palindrome
```

**Example 2:**
```
Enter a word: hello
Result: The word is not a Palindrome
```

{% include expandable-code.html title="Solution" id="sol-1" file="code/week-09/solution-01.c" %}

---

## Exercise 2: Sum of Digits
Write a recursive function named `sumDigits()`, that receives an integer `num` argument and recursively calculates the sum of its digits.

In `main()`, you need to ask the user for a non-negative integer, pass it to the function, and print the result.

**Example:**
```
Enter a number: 1234
Sum of digits: 10
```
(Calculation: $$ 1+2+3+4 = 10 $$)

{% include expandable-code.html title="Solution" id="sol-2" file="code/week-09/solution-02.c" %}

---

## Exercise 3: Lake Volume Simulator
Assume we have a lake that changes in volume according to the daily weather conditions:
*   **Sunny** (35% probability): Loses 2% of volume.
*   **Rainy** (30% probability): Increases by 1% of volume.
*   **Cloudy** (35% probability): Volume stays the same.

Write a recursive function `computeVolume(float V, int N)` that takes the current volume `V` and number of days `N`, and returns the resulting volume after simulating `N` days.

In `main()`, input the initial volume and number of days from the user.

**Example:**
```
Enter initial volume: 1000
Enter number of days: 3
Day 1: Sunny (Vol: 980.00)
Day 2: Cloudy (Vol: 980.00)
Day 3: Rainy (Vol: 989.80)
Final Volume: 989.80
```

> **Note**: Since weather is random, your output will vary.
{: .note }

{% include expandable-code.html title="Solution" id="sol-3" file="code/week-09/solution-03.c" %}

---

## Exercise 4: Reverse String
Develop a recursive function named `reverseString()` that takes a String `s` and prints it in reverse.

Notice that the first character of the reverse is the last character of the original string.

In `main()`, you need to input a string from the user and call the function to display the reversed version.

**Example:**
```
Enter a string: structure
Reversed: erutcurts
```

{% include expandable-code.html title="Solution" id="sol-4" file="code/week-09/solution-04.c" %}

---

## Exercise 5: Max Element in Array
Write a recursive function named `findMax()` that finds the maximum number in an array of integers.

In `main()`, define an array (e.g., `[10, 5, 20, 8]`) or ask the user to fill one, and print the maximum value found by your function.

**Example:**
```
Enter number of elements: 4
Enter elements: 10 5 20 8 
Max number is: 20
```

{% include expandable-code.html title="Solution" id="sol-5" file="code/week-09/solution-05.c" %}


---

## Exercise 6: Find the Output
Consider the following recursive function. What will be the output if `fun(3)` is called?

```c
void fun(int n) {
    if (n == 0)
        return;
    printf("%d ", n);
    fun(n - 1);
    printf("%d ", n);
}
```

{% include expandable-code.html title="Solution" id="sol-6" file="code/week-09/solution-06.c" %}

---

## Exercise 7: Find the Output
Consider the following recursive function. What will be the output if `fun(4, 3)` is called?

```c
int fun(int x, int y) {
    if (x == 0)
        return y;
    return fun(x - 1, x + y);
}
```

{% include expandable-code.html title="Solution" id="sol-7" file="code/week-09/solution-07.c" %}

---

## Exercise 8: Print Sequence
Consider an algorithm that takes as input a positive integer `n`. If `n` is even, the algorithm divides it by two, and if `n` is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until `n` is one. For example, the sequence for `n=3` is as follows:

$$ 3 \rightarrow 10 \rightarrow 5 \rightarrow 16 \rightarrow 8 \rightarrow 4 \rightarrow 2 \rightarrow 1 $$

Your task is to simulate the execution of the algorithm for a given value of `n`.

**Example**
```
Input:
3

Output:
3 10 5 16 8 4 2 1
```

{% include expandable-code.html title="Solution" id="sol-8" file="code/week-09/solution-08.c" %}


{% include week-nav.html prev_link="/notes/week-09/syntax/" prev_title="Syntax Guide" next_link="/notes/week-09/practice/" next_title="Practice" %}
