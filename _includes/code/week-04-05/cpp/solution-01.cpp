#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Divisors of " << n << " in decreasing order: ";
    for (int i = n; i >= 1; i--) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << "\n";

    return 0;
}
