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
