#include <iostream>

using namespace std;

void TriangleType(int a, int b, int c) {
    if (a == b && b == c) {
        cout << "Equilateral\n";
    } else if (a == b || b == c || a == c) {
        cout << "Isosceles\n";
    } else {
        cout << "Scalene\n";
    }
}

int main() {
    int s1, s2, s3;
    cout << "Enter 3 edges: ";
    cin >> s1 >> s2 >> s3;
    TriangleType(s1, s2, s3);
    return 0;
}
