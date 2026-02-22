#include <iostream>
#include <iomanip>

using namespace std;
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

    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter radius: ";
            cin >> val1;
            cout << "Perimeter: " << fixed << setprecision(2) << circle_per(val1) << endl;
            break;
        case 2:
            cout << "Enter length and width: ";
            cin >> val1 >> val2;
            cout << "Perimeter: " << fixed << setprecision(2) << rect_per(val1, val2) << endl;
            break;
        case 3:
            cout << "Enter 3 sides: ";
            cin >> val1 >> val2 >> val3;
            cout << "Perimeter: " << fixed << setprecision(2) << tri_per(val1, val2, val3) << endl;
            break;
        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}
