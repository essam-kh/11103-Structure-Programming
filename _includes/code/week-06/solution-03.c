#include <stdio.h>

int main() {
    int arr[50];
    int n, count = 0;

    printf("Enter the number of elements (up to 50): ");
    scanf("%d", &n);

    printf("Enter %d grades:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Multiples of five: ");
    for(int i = 0; i < n; i++) {
        if(arr[i] % 5 == 0) {
            printf("%d ", arr[i]);
            count++;
        }
    }
    printf("\nTotal count: %d\n", count);

    return 0;
}