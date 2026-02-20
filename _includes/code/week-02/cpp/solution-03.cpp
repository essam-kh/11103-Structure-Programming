#include <iostream>

using namespace std;

void Calc(int n1, int n2) {
    cout << "Addition: " << n1 + n2 << endl;
    cout << "Subtraction: " << n1 - n2 << endl;
    cout << "Multiplication: " << n1 * n2 << endl;
    cout << "Division: " << n1 / n2 << endl;
    cout << "Modulation: " << n1 % n2 << endl;
}

int main() {
    int num1, num2;

    cout << "Enter integer number 1: ";
    cin >> num1;

    cout << "Enter integer number 2: ";
    cin >> num2;

    Calc(num1, num2);

    return 0;
}
