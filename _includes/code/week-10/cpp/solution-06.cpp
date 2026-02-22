#include <iostream>
using namespace std;

int main() {
    int n;
    int a[100];

    cout << "Enter number of elements: ";
    cin >> n;

    int *left = a;
    int *right = &a[n - 1];

    cout << "Enter elements:\n";
    while (left <= right) {
        cin >> *left;
        left++;
    }

    // In-place reverse using two pointers
    left = a;
    right = &a[n - 1];
    while (left <= right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }

    cout << "Reversed array:\n";
    left = a;
    right = &a[n - 1];
    while (left <= right) {
        cout << *left << " ";
        left++;
    }
    cout << "\n";

    return 0;
}
