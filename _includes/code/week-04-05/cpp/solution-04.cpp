#include <iostream>
using namespace std;

int main() {
    int n, i, isPrime = 1;

    cout << "Enter an integer: ";
    cin >> n;

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        cout << n << " is a Prime number.\n";
    } else {
        cout << n << " is not a Prime number.\n";
    }

    return 0;
}
