#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Divisors of %d in decreasing order: ", n);
    for(i = n; i >= 1; i--) {
        if(n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}