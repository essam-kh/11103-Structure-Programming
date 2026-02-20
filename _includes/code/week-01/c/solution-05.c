#include <stdio.h>
 
int main() {
    int num1, num2, num3;
    float average;
 
    // Input three integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    
    printf("Enter the third integer: ");
    scanf("%d", &num3);
 
    // Calculate the average
    average = (float)(num1 + num2 + num3) / 3;
 
    // Print the average as a float
    printf("The average is: %.2f\n", average); // %.2f to display 2 decimal places
 
    return 0;
}
