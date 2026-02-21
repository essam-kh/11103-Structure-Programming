#include <iostream>
using namespace std;

int main() {
    int arr[50];
    int n, count = 0;

    cout << "Enter the number of elements (up to 50): ";
    cin >> n;

    cout << "Enter " << n << " grades:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    cout << "Multiples of five: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 5 == 0) {
            cout << arr[i] << " ";
            count++;
        }
    }
    cout << "\nTotal count: " << count << "\n";

    return 0;
}
