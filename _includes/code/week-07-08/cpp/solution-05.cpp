#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int arr[n][n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Cross Diagonal:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == n-1-j)
                cout << arr[i][j] << " ";
            else
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
