#include <stdio.h>

#define ROWS 3
#define COLS 4

void printMatrix(int rows, int cols, int arr[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int sumMatrix(int rows, int cols, int arr[][cols]) {
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

    printf("Enter elements of the %dx%d matrix:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix:\n");
    printMatrix(ROWS, COLS, matrix);

    printf("\nSum of all elements: %d\n", sumMatrix(ROWS, COLS, matrix));

    return 0;
}
