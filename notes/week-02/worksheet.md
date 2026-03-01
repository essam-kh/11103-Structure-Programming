---
layout: page
title: Week 2 Worksheet
parent: Week 2
nav_exclude: true
---

# Week 2 Practice Questions

> **Note:** Try to solve these questions on your own before checking the solutions.
{: .note }

## Exercise 1: Calculate Y
Write a function named `GetY()`, which receives the value of `X` and computes and returns the value of `Y`, as follows:

$$ Y = X^2 + 3\sqrt{X} + b $$

Where `b` is a constant value defined in the program (let `b = 7`).

In `main()`, you need to input the value for `X` and pass it to the function, then receive the value and print it out to the user.

**Example:**
```
Enter value for X: 4
The value of Y is: 29.00
```
(Calculation: $$ 16 + 3(2) + 7 = 29 $$)

{% include expandable-code.html title="Solution" id="sol-1" file_c="code/week-02/c/solution-01.c" file_cpp="code/week-02/cpp/solution-01.cpp" %}

## Exercise 2: Circle Properties
Write a function named `CircleArea()`, which receives the `R` (Radius) of the circle and computes both the **Area** and **Perimeter** of the Circle.

You need to display the values of Area and Perimeter **within the same function**.

In `main()`, you need to input the value for `R` and pass it to the function, then print out the results within the same function.

**Example:**
```
Enter the radius (R): 5
Area of the circle: 78.54
Perimeter of the circle: 31.42
```

{% include expandable-code.html title="Solution" id="sol-2" file_c="code/week-02/c/solution-02.c" file_cpp="code/week-02/cpp/solution-02.cpp" %}

## Exercise 3: Calculator Function
Implement a function named `Calc()`, that receives 2 integer arguments `n1`, `n2` and performs the basic mathematical operations (you need to display the results within the same function):
*   Addition (+)
*   Subtraction (-)
*   Multiplication (*)
*   Division (/)
*   Modulus (%)

In `main()`, you need to input the value for `n1`, `n2` and pass them to the function, then display the results within the same function.

> **Note**: The solution does not handle division by zero as conditional statements have not been covered yet.
{: .warning }

**Example:**
```
Enter integer number 1: 10
Enter integer number 2: 5
Addition: 15
Subtraction: 5
Multiplication: 50
Division: 2
Modulation: 0
```

{% include expandable-code.html title="Solution" id="sol-3" file_c="code/week-02/c/solution-03.c" file_cpp="code/week-02/cpp/solution-03.cpp" %}

## Exercise 4: Average of Digits
Implement a function named `DigitsNum()`, that receives a **3-digit integer** argument `num` and returns the **average** of its digits.

In `main()`, you need to input the value for `num` and pass it to the function, then receive the value and print it out to the user.

**Example:**
```
Enter a 3-digit integer: 123
The average of the digits is: 2.00
(Calculation: $$ (1+2+3)/3 = 2 $$)
```
{% include expandable-code.html title="Solution" id="sol-4" file_c="code/week-02/c/solution-04.c" file_cpp="code/week-02/cpp/solution-04.cpp" %}

## Exercise 5: Currency Converter
Implement a function named `CurrencyConvertor()`, which receives an amount of money (double value) in **JoD** (Jordanian Dinar) then converts it to **USD**, suppose that:

$$ 1 \text{ JoD} = 1.4112 \text{ USD} $$

**Example:**
```
Enter amount in JOD: 100
Amount in USD: 141.1200
```

{% include expandable-code.html title="Solution" id="sol-5" file_c="code/week-02/c/solution-05.c" file_cpp="code/week-02/cpp/solution-05.cpp" %}

---

{% include week-nav.html prev_link="/notes/week-02/syntax/" prev_title="Syntax Guide" next_link="/notes/week-02/practice/" next_title="Practice" %}
