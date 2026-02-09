#include <stdio.h>

void LeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year\n", year);
    } else {
        printf("%d is not a Leap Year\n", year);
    }
}

int main() {
    int y;
    printf("Enter year: ");
    scanf("%d", &y);
    LeapYear(y);
    return 0;
}
