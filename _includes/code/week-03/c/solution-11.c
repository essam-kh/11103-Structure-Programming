#include <stdio.h>

int IsValidDate(int day, int month, int year);

int main() {
    int day, month, year;

    printf("Enter day, month, year: ");
    scanf("%d %d %d", &day, &month, &year);

    if (IsValidDate(day, month, year)) {
        printf("Date is Valid\n");
    } else {
        printf("Date is Invalid\n");
    }

    return 0;
}   

int IsValidDate(int day, int month, int year) {
    if (year <= 0 || month < 1 || month > 12 || day < 1) {
        return 0;
    }

    int maxDays = 31;

    if (month == 4 || month == 6 || month == 9 || month == 11) {
        maxDays = 30;
    } else if (month == 2) {
        int isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        maxDays = isLeap ? 29 : 28;
    }

    return day <= maxDays;
}
