#include <iostream>
using namespace std;

int main() {
    int year, month, day;
    int totalDays;

    cout << "Enter the year: ";
    cin >> year;

    cout << "Enter the month (1-12): ";
    cin >> month;

    cout << "Enter the day (1-31): ";
    cin >> day;

    totalDays = (year * 360) + ((month - 1) * 30) + day;

    cout << "Total number of days from year 0 is: " << totalDays << endl;

    return 0;
}
