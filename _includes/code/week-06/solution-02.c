#include <stdio.h>

int main() {
    int arr[50];
    int n, sumEven = 0, sumOdd = 0;

    printf("Enter the number of elements (up to 50): ");
    scanf("%d", &n);

    printf("Enter %d grades:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    printf("Array elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    if(sumEven > sumOdd) {
        printf("1\n");
    } else if(sumOdd > sumEven) {
        printf("-1\n");
    } else {
        printf("0\n");
    }

    return 0;
}