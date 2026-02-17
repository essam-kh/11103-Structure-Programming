#include <stdio.h>

void calc(int n) {
    printf("%d ", n);
    if (n == 1) {
        return;
    }
    if (n % 2 == 0) {
        calc(n / 2);
    } else {
        calc(3 * n + 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    calc(n);
    return 0;
}
