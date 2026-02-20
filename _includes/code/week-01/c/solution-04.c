#include <stdio.h>

int main() {
    int year, month, day;
    int totalDays;

    printf("Enter the year: ");
    scanf("%d", &year);

    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    printf("Enter the day (1-31): ");
    scanf("%d", &day);

    totalDays = (year * 360) + ((month - 1) * 30) + day;

    printf("Total number of days from year 0 is: %d\n", totalDays);

    return 0;
}
