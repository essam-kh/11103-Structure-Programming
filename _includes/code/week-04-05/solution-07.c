#include <stdio.h>

void printRange(int m, int n) {
    int i;

    if (m > n) {
        printf("Error: m is greater than n.\n");
        return;
    }

    printf("Using For Loop: ");
    for(i = m; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Using While Loop: ");
    i = m;
    while(i <= n) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    printf("Using Do-While Loop: ");
    i = m;
    do {
        printf("%d ", i);
        i++;
    } while(i <= n);
    printf("\n");
}

int main() {
    int m, n;

    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    printRange(m, n);

    return 0;
}