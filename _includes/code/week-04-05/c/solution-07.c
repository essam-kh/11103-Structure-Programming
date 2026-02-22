#include <stdio.h>

void printRange(int m, int n) {
    if (m > n) {
        printf("Error: m is greater than n.\n");
        return;
    }

    printf("Range: ");
    for (int i = m; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int m, n;

    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    printRange(m, n);

    return 0;
}