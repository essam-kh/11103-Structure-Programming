#include <stdio.h>

int isSorted(int arr[], int size) {
    if (size == 0 || size == 1) 
        return 1;
    if (arr[size - 1] < arr[size - 2])
        return 0;
    return isSorted(arr, size - 1);
}

int main() {
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    if (isSorted(arr, size)) {
        printf("Array is sorted.\n");
    } else {
        printf("Array is not sorted.\n");
    }
    
    return 0;
}
