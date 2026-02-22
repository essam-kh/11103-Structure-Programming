#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Cross Diagonal:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == n-1-j)
                printf("%d ",arr[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
