#include <stdio.h>

void printAscending(int a, int b, int c) {
    if (a <= b && a <= c) {
        if (b <= c)
            printf("Numbers in Ascending Order: %d %d %d\n", a, b, c);
        else
            printf("Numbers in Ascending Order: %d %d %d\n", a, c, b);
    }
    else if (b <= a && b <= c) {
        if (a <= c)
            printf("Numbers in Ascending Order: %d %d %d\n", b, a, c);
        else
            printf("Numbers in Ascending Order: %d %d %d\n", b, c, a);
    }
    else { 
        if (a <= b)
            printf("Numbers in Ascending Order: %d %d %d\n", c, a, b);
        else
            printf("Numbers in Ascending Order: %d %d %d\n", c, b, a);
    }
}

int main() {
    int a, b, c;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printAscending(a, b, c);

    return 0;
}
