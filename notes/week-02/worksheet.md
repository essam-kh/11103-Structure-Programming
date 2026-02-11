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
Enter X: 4
Result Y: 29
```
(Calculation: $$ 16 + 3(2) + 7 = 29 $$)

{% include expandable-code.html title="Solution" id="sol-1" file="code/week-02/solution-01.c" %}

## Exercise 2: Circle Properties
Write a function named `CircleArea()`, which receives the `R` (Radius) of the circle and computes both the **Area** and **Perimeter** of the Circle.

You need to display the values of Area and Perimeter **within the same function**.

In `main()`, you need to input the value for `R` and pass it to the function, then print out the results within the same function.

**Example:**
```
Enter Radius: 5
Area: 78.54
Perimeter: 31.42
```

{% include expandable-code.html title="Solution" id="sol-2" file="code/week-02/solution-02.c" %}

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
Enter two numbers: 10 5
Sum: 15
Difference: 5
Product: 50
Quotient: 2
Modulus: 0
```

{% include expandable-code.html title="Solution" id="sol-3" file="code/week-02/solution-03.c" %}

## Exercise 4: Average of Digits
Implement a function named `DigitsNum()`, that receives a **3-digit integer** argument `num` and returns the **average** of its digits.

In `main()`, you need to input the value for `num` and pass it to the function, then receive the value and print it out to the user.

**Example:**
```
Enter a 3-digit number: 123
Average of digits: 2
```
(Calculation: $$ (1+2+3)/3 = 2 $$)

{% include expandable-code.html title="Solution" id="sol-4" file="code/week-02/solution-04.c" %}

## Exercise 5: Currency Converter
Implement a function named `CurrencyConvertor()`, which receives an amount of money (double value) in **JoD** (Jordanian Dinar) then converts it to **USD**, suppose that:

$$ 1 \text{ JoD} = 1.4112 \text{ USD} $$

**Example:**
```
Enter amount in JoD: 100
Amount in USD: 141.12
```

{% include expandable-code.html title="Solution" id="sol-5" file="code/week-02/solution-05.c" %}

---

{% include week-nav.html prev_link="/notes/week-02/syntax/" prev_title="Syntax Guide" next_link="/notes/week-02/practice/" next_title="Practice" %}
