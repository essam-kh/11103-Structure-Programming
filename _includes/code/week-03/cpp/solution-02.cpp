#include <iostream>

using namespace std;

void LeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a Leap Year\n";
    } else {
        cout << year << " is not a Leap Year\n";
    }
}

int main() {
    int y;
    cout << "Enter year: ";
    cin >> y;
    LeapYear(y);
    return 0;
}
