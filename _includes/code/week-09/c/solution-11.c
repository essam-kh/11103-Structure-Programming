#include <stdio.h>

int countOccurrences(int arr[], int size, int target) {
    if (size == 0) 
        return 0;
    
    if (arr[size - 1] == target)
        return 1 + countOccurrences(arr, size - 1, target);
    else
        return countOccurrences(arr, size - 1, target);
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
    
    int target;
    printf("Enter target: ");
    scanf("%d", &target);
    
    printf("Count: %d\n", countOccurrences(arr, size, target));
    
    return 0;
}
