#include <stdio.h>

int main() {
    int arr[50];
    int n, startValue, endValue, count = 0;

    printf("Enter the number of elements (up to 50): ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter startValue and endValue: ");
    scanf("%d %d", &startValue, &endValue);

    for(int i = 0; i < n; i++) {
        if(arr[i] >= startValue && arr[i] <= endValue) {
            count++;
        }
    }

    printf("Count of values between %d and %d: %d\n", startValue, endValue, count);

    return 0;
}