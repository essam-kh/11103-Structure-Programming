#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159;

void CircleArea(double r) {
    double area = PI * r * r;
    double perimeter = 2 * PI * r;

    cout << fixed << setprecision(2);
    cout << "Area of the circle: " << area << endl;
    cout << "Perimeter of the circle: " << perimeter << endl;
}

int main() {
    double radius;

    cout << "Enter the radius (R): ";
    cin >> radius;

    CircleArea(radius);

    return 0;
}
