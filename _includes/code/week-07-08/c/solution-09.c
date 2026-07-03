#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[50][50];
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
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
        printf("Row %d largest adjacent difference: %d\n", i, rowMaxDiff);
        if (rowMaxDiff > overallMaxDiff) {
            overallMaxDiff = rowMaxDiff;
        }
    }

    printf("Max adjacent difference across whole matrix: %d\n", overallMaxDiff);

    return 0;
}
