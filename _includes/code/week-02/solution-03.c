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
