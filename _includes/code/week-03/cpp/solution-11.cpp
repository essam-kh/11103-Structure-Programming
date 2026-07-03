#include <iostream>
using namespace std;

bool IsValidDate(int day, int month, int year);

int main() {
    int day, month, year;

    cout << "Enter day, month, year: ";
    cin >> day >> month >> year;

    if (IsValidDate(day, month, year)) {
        cout << "Date is Valid" << endl;
    } else {
        cout << "Date is Invalid" << endl;
    }

    return 0;
}

bool IsValidDate(int day, int month, int year) {
    if (year <= 0 || month < 1 || month > 12 || day < 1) {
        return false;
    }

    int maxDays = 31;

    if (month == 4 || month == 6 || month == 9 || month == 11) {
        maxDays = 30;
    } else if (month == 2) {
        bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        maxDays = isLeap ? 29 : 28;
    }

    return day <= maxDays;
}
