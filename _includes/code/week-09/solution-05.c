#include <stdio.h>

int findMax(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }

    int mx = findMax(arr, n - 1);

    if (arr[n - 1] > mx) {
        return arr[n - 1];
    } else {
        return mx;
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Max number is: %d\n", findMax(arr, n));
    return 0;
}
