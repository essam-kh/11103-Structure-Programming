#include <iostream>

using namespace std;

void printAscending(int a, int b, int c) {
    if (a <= b && a <= c) {
        if (b <= c)
            cout << "Numbers in Ascending Order: " << a << " " << b << " " << c << endl;
        else
            cout << "Numbers in Ascending Order: " << a << " " << c << " " << b << endl;
    }
    else if (b <= a && b <= c) {
        if (a <= c)
            cout << "Numbers in Ascending Order: " << b << " " << a << " " << c << endl;
        else
            cout << "Numbers in Ascending Order: " << b << " " << c << " " << a << endl;
    }
    else { 
        if (a <= b)
            cout << "Numbers in Ascending Order: " << c << " " << a << " " << b << endl;
        else
            cout << "Numbers in Ascending Order: " << c << " " << b << " " << a << endl;
    }
}

int main() {
    int a, b, c;

    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    printAscending(a, b, c);

    return 0;
}
