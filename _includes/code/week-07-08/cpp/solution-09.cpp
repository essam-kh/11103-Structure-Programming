#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int arr[50][50];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    int overallMaxDiff = 0;

    for (int i = 0; i < r; i++) {
        int rowMaxDiff = 0;
        for (int j = 0; j < c - 1; j++) {
            int diff = abs(arr[i][j] - arr[i][j + 1]);
            if (diff > rowMaxDiff) {
                rowMaxDiff = diff;
            }
        }
        cout << "Row " << i << " largest adjacent difference: " << rowMaxDiff << endl;
        if (rowMaxDiff > overallMaxDiff) {
            overallMaxDiff = rowMaxDiff;
        }
    }

    cout << "Max adjacent difference across whole matrix: " << overallMaxDiff << endl;

    return 0;
}
