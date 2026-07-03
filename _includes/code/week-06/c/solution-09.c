#include <stdio.h>

void FindLeaders(int arr[], int size);

int main() {
    int size;
    int arr[50];

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    FindLeaders(arr, size);

    return 0;
}

void FindLeaders(int arr[], int size) {
    printf("Leaders in the array: ");
    
    int current_max = arr[size - 1];
    
    int leaders[50];
    int leaderCount = 0;
    
    leaders[leaderCount++] = current_max;

    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] > current_max) {
            current_max = arr[i];
            leaders[leaderCount++] = current_max;
        }
    }

    for (int i = leaderCount - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
    printf("\n");
}
