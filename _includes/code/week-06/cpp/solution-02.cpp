#include <iostream>
using namespace std;

int main() {
    int arr[50];
    int n, sumEven = 0, sumOdd = 0;

    cout << "Enter the number of elements (up to 50): ";
    cin >> n;

    cout << "Enter " << n << " grades:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    if (sumEven > sumOdd) {
        cout << "1\n";
    } else if (sumOdd > sumEven) {
        cout << "-1\n";
    } else {
        cout << "0\n";
    }

    return 0;
}
