#include <stdio.h>

int SumRange(const int *start, const int *end) {
    int sum = 0;
    while (start < end) {
        sum += *start;
        start++;
    }
    return sum;
}

int main() {
    int size;
    int arr[50];
    int startIdx, endIdx;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter start and end indexes: ");
    scanf("%d %d", &startIdx, &endIdx);

    int sum = SumRange(&arr[startIdx], &arr[endIdx]);
    printf("Sum: %d\n", sum);

    return 0;
}
