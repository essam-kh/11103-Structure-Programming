#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    cout << "Addition: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << "Division: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << "Modulus: " << num1 << " % " << num2 << " = " << num1 % num2 << endl;

    return 0;
}
