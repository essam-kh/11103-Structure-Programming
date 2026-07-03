#include <stdio.h>

void FindMinMax(int *arr, int size, int *min, int *max) {
    *min = *arr;
    *max = *arr;
    for (int i = 1; i < size; i++) {
        int val = *(arr + i);
        if (val < *min) {
            *min = val;
        }
        if (val > *max) {
            *max = val;
        }
    }
}

int main() {
    int size;
    int arr[50];
    int min, max;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    FindMinMax(arr, size, &min, &max);

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    return 0;
}
