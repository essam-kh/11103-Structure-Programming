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
