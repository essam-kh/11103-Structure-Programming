#include <stdio.h>

int main() {
    int n;
    int fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("%d! = %d\n", n, fact);

    return 0;
}