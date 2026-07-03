#include <iostream>
using namespace std;

int main() {
    int a, b;

    
    cout << "Enter first integer (A): ";
    cin >> a;

    cout << "Enter second integer (B): ";
    cin >> b;

    
    a = a + b;
    b = a - b;
    a = a - b;

    
    cout << "After swapping: A = " << a << ", B = " << b << endl;

    return 0;
}
