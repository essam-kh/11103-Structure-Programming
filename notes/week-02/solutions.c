#include <stdio.h>
#include <math.h>

double GetY(double x) {
    int b = 7;
    double y = (x * x) + (3 * sqrt(x)) + b;
    return y;
}

int main() {
    double X, result;

    printf("Enter value for X: ");
    scanf("%lf", &X);

    result = GetY(X);

    printf("The value of Y is: %.2lf\n", result);

    return 0;
}


#include <stdio.h>
const double PI = 3.14159;

void CircleArea(double r) {
    double area = PI * r * r;
    double perimeter = 2 * PI * r;

    printf("Area of the circle: %.2lf\n", area);
    printf("Perimeter of the circle: %.2lf\n", perimeter);
}

int main() {
    double radius;

    printf("Enter the radius (R): ");
    scanf("%lf", &radius);

    CircleArea(radius);

    return 0;
}

/* 
    when adding this as a solution add a note that 
    we are not handling the case of division by zero
    since we didn't learn conditional statements yet
*/
#include <stdio.h>

void Calc(int n1, int n2) {
    printf("Addition: %d\n", n1 + n2);
    printf("Subtraction: %d\n", n1 - n2);
    printf("Multiplication: %d\n", n1 * n2);
    printf("Division: %d\n", n1 / n2);
    printf("Modulation: %d\n", n1 % n2);
}

int main() {
    int num1, num2;

    printf("Enter integer number 1: ");
    scanf("%d", &num1);

    printf("Enter integer number 2: ");
    scanf("%d", &num2);

    Calc(num1, num2);

    return 0;
}

#include <stdio.h>

double DigitsNum(int num) {
    int d1, d2, d3;
    
    d1 = num % 10;
    d2 = (num / 10) % 10;
    d3 = num / 100;
    
    double sum = d1 + d2 + d3;
    
    return sum / 3;
}

int main() {
    int number;
    double average;

    printf("Enter a 3-digit integer: ");
    scanf("%d", &number);

    average = DigitsNum(number);

    printf("The average of the digits is: %.2lf\n", average);

    return 0;
}

#include <stdio.h>

double CurrencyConvertor(double jod) {
    const double rate = 1.4112;
    return jod * rate;
}

int main() {
    double money_jod, money_usd;

    printf("Enter amount in JOD: ");
    scanf("%lf", &money_jod);

    money_usd = CurrencyConvertor(money_jod);

    printf("Amount in USD: %.4lf\n", money_usd);

    return 0;
}

