#include <stdio.h>

int CountSubsequences(int arr[], int size, int index, int currentSum, int targetSum) {
    if (index == size) {
        return currentSum == targetSum ? 1 : 0;
    }

    int take = CountSubsequences(arr, size, index + 1, currentSum + arr[index], targetSum);
    int dontTake = CountSubsequences(arr, size, index + 1, currentSum, targetSum);

    return take + dontTake;
}

int main() {
    int size, targetSum;
    int arr[50];

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &targetSum);

    int count = CountSubsequences(arr, size, 0, 0, targetSum);
    printf("Number of subsequences: %d\n", count);

    return 0;
}
