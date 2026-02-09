#include <stdio.h>

const double PI = 3.14159;

double circle_per(double r) {
    return 2 * PI * r;
}

double rect_per(double a, double b) {
    return 2 * (a + b);
}

double tri_per(double a, double b, double c) {
    return a + b + c;
}

int main() {
    int choice;
    double val1, val2, val3;

    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%lf", &val1);
            printf("Perimeter: %.2lf\n", circle_per(val1));
            break;
        case 2:
            printf("Enter length and width: ");
            scanf("%lf %lf", &val1, &val2);
            printf("Perimeter: %.2lf\n", rect_per(val1, val2));
            break;
        case 3:
            printf("Enter 3 sides: ");
            scanf("%lf %lf %lf", &val1, &val2, &val3);
            printf("Perimeter: %.2lf\n", tri_per(val1, val2, val3));
            break;
        case 4:
            // Intentional fallthrough or extra case? 
            // The original code stops at 3.
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
