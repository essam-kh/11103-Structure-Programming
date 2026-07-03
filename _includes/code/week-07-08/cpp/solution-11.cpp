#include <iostream>
using namespace std;

#define MAX_COLS 50

void SwapRows(int arr[][MAX_COLS], int r, int c, int r1, int r2) {
    for (int i = 0; i < c; i++) {
        int temp = arr[r1][i];
        arr[r1][i] = arr[r2][i];
        arr[r2][i] = temp;
    }
}

int main() {
    int r, c, r1, r2;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int arr[50][MAX_COLS];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Enter rows to swap: ";
    cin >> r1 >> r2;

    SwapRows(arr, r, c, r1, r2);

    cout << "\nMatrix after swap:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
