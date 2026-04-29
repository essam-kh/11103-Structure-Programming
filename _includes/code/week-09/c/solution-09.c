#include <stdio.h>

int power(int x, int y) {
    if (y == 0) return 1;
    return x * power(x, y - 1);
}

int main() {
    int base, exp;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    printf("Result: %d\n", power(base, exp));
    return 0;
}
