#include <stdio.h>

const double PI = 3.14159;

void CircleArea(double r) {
    double area = PI * r * r;
    double perimeter = 2 * PI * r;

    printf("Area of the circle: %.2lf\n", area);
    printf("Perimeter of the circle: %.2lf\n", perimeter);
}

int main() {
    double radius;

    printf("Enter the radius (R): ");
    scanf("%lf", &radius);

    CircleArea(radius);

    return 0;
}
