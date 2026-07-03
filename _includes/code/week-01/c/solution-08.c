#include <stdio.h>

int main() {
    int a, b;

    
    printf("Enter first integer (A): ");
    scanf("%d", &a);

    printf("Enter second integer (B): ");
    scanf("%d", &b);

    
    a = a + b;
    b = a - b;
    a = a - b;

    
    printf("After swapping: A = %d, B = %d\n", a, b);

    return 0;
}
