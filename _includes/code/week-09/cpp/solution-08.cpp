#include <iostream>
using namespace std;

void calc(int n) {
    cout << n << " ";
    if (n == 1) return;
    if (n % 2 == 0) {
        calc(n / 2);
    } else {
        calc(3 * n + 1);
    }
}

int main() {
    int n;
    cin >> n;
    calc(n);
    return 0;
}
