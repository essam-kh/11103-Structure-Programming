#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    if (n == 1) return arr[0];
    int mx = findMax(arr, n - 1);
    return (arr[n - 1] > mx) ? arr[n - 1] : mx;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Max number is: " << findMax(arr, n) << "\n";
    return 0;
}
