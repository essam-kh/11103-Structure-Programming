#include <stdio.h>

#define ROWS 3
#define COLS 4

int countEvens(int rows, int cols, int arr[][cols]) {
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

    printf("Enter elements of the %dx%d matrix:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nNumber of even elements: %d\n", countEvens(ROWS, COLS, matrix));

    return 0;
}
