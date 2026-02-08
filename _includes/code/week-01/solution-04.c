#include <stdio.h>
 
int main() {
    int birthYear, birthMonth, birthDay;
    int currentYear, currentMonth, currentDay;
    int daysInYear = 360; // Assuming a year has 360 days
 
    // Input birth date
    printf("Enter your birth year (e.g., 1990): ");
    scanf("%d", &birthYear);
 
    printf("Enter your birth month (1-12): ");
    scanf("%d", &birthMonth);
 
    printf("Enter your birth day (1-31): ");
    scanf("%d", &birthDay);
 
    // Input current date (for calculating the age)
    printf("Enter the current year (e.g., 2023): ");
    scanf("%d", &currentYear);
 
    printf("Enter the current month (1-12): ");
    scanf("%d", &currentMonth);
 
    printf("Enter the current day (1-31): ");
    scanf("%d", &currentDay);
 
    // Calculate the age in days
    int ageInDays = (currentYear - birthYear) * daysInYear;
    ageInDays += (currentMonth - birthMonth) * 30; // Assuming 30 days per month
    ageInDays += (currentDay - birthDay);
 
    printf("Your age in days is: %d\n", ageInDays);
 
    return 0;
}
