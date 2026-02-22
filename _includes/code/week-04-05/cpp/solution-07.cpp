#include <iostream>
using namespace std;

void printRange(int m, int n) {
    if (m > n) {
        cout << "Error: m is greater than n.\n";
        return;
    }

    cout << "Range: ";
    for (int i = m; i <= n; i++) {
        cout << i << " ";
    }
    cout << "\n";
}

int main() {
    int m, n;

    cout << "Enter m and n: ";
    cin >> m >> n;

    printRange(m, n);

    return 0;
}
