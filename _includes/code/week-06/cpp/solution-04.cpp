#include <iostream>
using namespace std;

int main() {
    int A[50], B[50], C[100];
    int nA, nB, nC = 0, appendChoice;

    cout << "Enter number of elements for A: ";
    cin >> nA;
    cout << "Enter elements for A:\n";
    for (int i = 0; i < nA; i++) cin >> A[i];

    cout << "Enter number of elements for B: ";
    cin >> nB;
    cout << "Enter elements for B:\n";
    for (int i = 0; i < nB; i++) cin >> B[i];

    cout << "Enter Append value (0 or 1): ";
    cin >> appendChoice;

    if (appendChoice == 1) {
        for (int i = 0; i < nB; i++) C[nC++] = B[i];
        for (int i = 0; i < nA; i++) C[nC++] = A[i];
    } else if (appendChoice == 0) {
        for (int i = 0; i < nA; i++) C[nC++] = A[i];
        for (int i = 0; i < nB; i++) C[nC++] = B[i];
    }

    cout << "Result Array C: ";
    for (int i = 0; i < nC; i++) {
        cout << C[i] << " ";
    }
    cout << "\n";

    return 0;
}
