---
layout: page
title: Week 9 Syntax
parent: Week 9
nav_exclude: true
---

# Week 9 Syntax Guide

## Recursive Function Structure

A recursive function typically consists of two main parts: the **Base Case** and the **Recursive Case**.

```cpp
returnType functionName(parameters) {
    if (base_case_condition) {
        // Base Case: The condition that stops the recursion
        return value;
    }
    // Recursive Case: The function calls itself with modifie parameters
    // to move towards the base case
    return ... functionName(modified_parameters);
}
```

### 1. The Base Case
The base case is crucial because it prevents the function from calling itself infinitely. It represents the simplest instance of the problem that can be solved directly without further recursion.

### 2. The Recursive Case
This part breaks the problem down into smaller sub-problems. It calls the function itself with arguments that bring the state closer to the base case.

---

## Example: Factorial

Let's look at how to calculate the factorial of a number `n` (`n!`) using recursion.
`n! = n * (n-1) * ... * 1`
Base case: `1! = 1` (or `0! = 1`)

```c
int factorial(int n) {
    if (n <= 1) {
        return 1;     // Base Case
    } 
    else {
        return n * factorial(n - 1);  // Recursive Step
    }
}
```

**Tracing `factorial(3)`:**
1. `factorial(3)` calls `3 * factorial(2)`
2. `factorial(2)` calls `2 * factorial(1)`
3. `factorial(1)` returns `1` (Base Case reached!)
4. `factorial(2)` returns `2 * 1 = 2`
5. `factorial(3)` returns `3 * 2 = 6`

---

## Common Pitfalls

### 1. Infinite Recursion (Stack Overflow)
If you forget the base case or if the recursive step doesn't move towards the base case, the function will call itself indefinitely until the program runs out of memory (Stack Overflow).

**Incorrect Example (No Base Case):**

> **Critical**: This will cause a textual stack overflow!
{: .warning }

```c
int infiniteSum(int n) {
    return n + infiniteSum(n - 1); // No condition to stop!
}
```

### 2. Incorrect Recursive Step
Ensure that the parameters passed to the recursive call actually change in a way that eventually meets the base case condition. For example, if you base case checks for `n == 0` but you call `func(n + 1)`, you might go in the wrong direction.


---

## Multiple Recursive Calls (Tree Recursion)

Sometimes a function needs to make more than one recursive call to solve a problem. This is common in problems like the Fibonacci sequence. The execution flow branches out like a tree.

```c
int fib(int n) {
    if (n <= 1) {
        return n;
    }
    // Two recursive calls: The function calls itself twice
    return fib(n - 1) + fib(n - 2);
}
```

> **Note**: Be careful with multiple recursive calls as they can grow exponentially in complexity if not managed correctly.
{: .note }

{% include week-nav.html prev_link="/notes/week-09/notes/" prev_title="Lecture Notes" next_link="/notes/week-09/worksheet/" next_title="Worksheet" %}
