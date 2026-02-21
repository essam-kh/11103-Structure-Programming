#include <iostream>
using namespace std;

int main() {
    int arr[50];
    int n, startValue, endValue, count = 0;

    cout << "Enter the number of elements (up to 50): ";
    cin >> n;

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    cout << "Enter startValue and endValue: ";
    cin >> startValue >> endValue;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= startValue && arr[i] <= endValue) {
            count++;
        }
    }

    cout << "Count of values between " << startValue << " and " << endValue << ": " << count << "\n";

    return 0;
}
