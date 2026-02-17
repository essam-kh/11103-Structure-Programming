#include <stdio.h>

int main() {
    int A[50], B[50], C[100];
    int nA, nB, nC = 0, appendChoice;

    printf("Enter number of elements for A: ");
    scanf("%d", &nA);
    printf("Enter elements for A:\n");
    for(int i = 0; i < nA; i++) scanf("%d", &A[i]);

    printf("Enter number of elements for B: ");
    scanf("%d", &nB);
    printf("Enter elements for B:\n");
    for(int i = 0; i < nB; i++) scanf("%d", &B[i]);

    printf("Enter Append value (0 or 1): ");
    scanf("%d", &appendChoice);

    if(appendChoice == 1) {
        for(int i = 0; i < nB; i++) {
            C[nC] = B[i];
            nC++;
        }
        for(int i = 0; i < nA; i++) {
            C[nC] = A[i];
            nC++;
        }
    } else if (appendChoice == 0) {
        for(int i = 0; i < nA; i++) {
            C[nC] = A[i];
            nC++;
        }
        for(int i = 0; i < nB; i++) {
            C[nC] = B[i];
            nC++;
        }
    }

    printf("Result Array C: ");
    for(int i = 0; i < nC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}