#include <iostream>
using namespace std;

#define ROWS 3
#define COLS 4

int countEvens(int arr[][COLS], int rows, int cols) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] % 2 == 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int matrix[ROWS][COLS];

    cout << "Enter elements of the " << ROWS << "x" << COLS << " matrix:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nNumber of even elements: " << countEvens(matrix, ROWS, COLS) << "\n";

    return 0;
}
