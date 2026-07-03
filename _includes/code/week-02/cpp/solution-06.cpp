#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double Distance2D(double x1, double y1, double x2, double y2);

int main() {
    double x1, y1, x2, y2;

    cout << "Enter coordinates for Point 1 (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates for Point 2 (x2 y2): ";
    cin >> x2 >> y2;

    double dist = Distance2D(x1, y1, x2, y2);

    cout << "The distance between the points is: " << fixed << setprecision(2) << dist << endl;

    return 0;
}

double Distance2D(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
