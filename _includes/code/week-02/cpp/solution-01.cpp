#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double GetY(double x) {
    int b = 7;
    double y = (x * x) + (3 * sqrt(x)) + b;
    return y;
}

int main() {
    double X, result;

    cout << "Enter value for X: ";
    cin >> X;

    result = GetY(X);

    cout << "The value of Y is: " << fixed << setprecision(2) << result << endl;

    return 0;
}
