#include <stdio.h>

void MergeSorted(int A[], int sizeA, int B[], int sizeB, int C[]);

int main() {
    int sizeA, sizeB;
    int A[50], B[50], C[100];

    printf("Enter size of A: ");
    scanf("%d", &sizeA);
    printf("Enter %d sorted elements for A: ", sizeA);
    for (int i = 0; i < sizeA; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter size of B: ");
    scanf("%d", &sizeB);
    printf("Enter %d sorted elements for B: ", sizeB);
    for (int i = 0; i < sizeB; i++) {
        scanf("%d", &B[i]);
    }

    MergeSorted(A, sizeA, B, sizeB, C);

    printf("Merged array C: ");
    for (int i = 0; i < sizeA + sizeB; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

void MergeSorted(int A[], int sizeA, int B[], int sizeB, int C[]) {
    int i = 0, j = 0, k = 0;

    while (i < sizeA && j < sizeB) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    while (i < sizeA) {
        C[k++] = A[i++];
    }

    // Copy remaining items of B if any
    while (j < sizeB) {
        C[k++] = B[j++];
    }
}
