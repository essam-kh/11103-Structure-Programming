#include <stdio.h>

void TriangleType(int a, int b, int c) {
    if (a == b && b == c) {
        printf("Equilateral\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }
}

int main() {
    int s1, s2, s3;
    printf("Enter 3 edges: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    TriangleType(s1, s2, s3);
    return 0;
}
