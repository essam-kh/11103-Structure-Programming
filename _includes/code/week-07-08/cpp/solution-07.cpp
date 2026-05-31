#include <iostream>
using namespace std;

#define ROWS 3
#define COLS 4

void printMatrix(int arr[][COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int sumMatrix(int arr[][COLS], int rows, int cols) {
    int total = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            total += arr[i][j];
        }
    }
    return total;
}

int main() {
    int matrix[ROWS][COLS];

    cout << "Enter elements of the " << ROWS << "x" << COLS << " matrix:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix:\n";
    printMatrix(matrix, ROWS, COLS);

    cout << "\nSum of all elements: " << sumMatrix(matrix, ROWS, COLS) << "\n";

    return 0;
}
