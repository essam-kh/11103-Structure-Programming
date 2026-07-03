#include <stdio.h>
#include <math.h>

double Distance2D(double x1, double y1, double x2, double y2);

int main() {
    double x1, y1, x2, y2;

    printf("Enter coordinates for Point 1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter coordinates for Point 2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    double dist = Distance2D(x1, y1, x2, y2);

    printf("The distance between the points is: %.2f\n", dist);

    return 0;
}

double Distance2D(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
