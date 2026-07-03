#include <stdio.h>

void SwapRows(int r, int c, int arr[][c], int r1, int r2) {
    for (int i = 0; i < c; i++) {
        int temp = arr[r1][i];
        arr[r1][i] = arr[r2][i];
        arr[r2][i] = temp;
    }
}

int main() {
    int r, c, r1, r2;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[50][50];
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter rows to swap: ");
    scanf("%d %d", &r1, &r2);

    SwapRows(r, c, arr, r1, r2);

    printf("\nMatrix after swap:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
