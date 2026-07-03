#include <iostream>
using namespace std;

void MergeSorted(int A[], int sizeA, int B[], int sizeB, int C[]);

int main() {
    int sizeA, sizeB;
    int A[50], B[50], C[100];

    cout << "Enter size of A: ";
    cin >> sizeA;
    cout << "Enter " << sizeA << " sorted elements for A: ";
    for (int i = 0; i < sizeA; i++) {
        cin >> A[i];
    }

    cout << "Enter size of B: ";
    cin >> sizeB;
    cout << "Enter " << sizeB << " sorted elements for B: ";
    for (int i = 0; i < sizeB; i++) {
        cin >> B[i];
    }

    MergeSorted(A, sizeA, B, sizeB, C);

    cout << "Merged array C: ";
    for (int i = 0; i < sizeA + sizeB; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

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

    while (j < sizeB) {
        C[k++] = B[j++];
    }
}
