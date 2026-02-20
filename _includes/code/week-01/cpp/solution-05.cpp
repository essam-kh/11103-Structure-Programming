#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int num1, num2, num3;
    float average;
 
    // Input three integers
    cout << "Enter the first integer: ";
    cin >> num1;
    
    cout << "Enter the second integer: ";
    cin >> num2;
    
    cout << "Enter the third integer: ";
    cin >> num3;
 
    // Calculate the average
    average = (float)(num1 + num2 + num3) / 3;
 
    // Print the average as a float
    cout << "The average is: " << fixed << setprecision(2) << average << endl; // setprecision(2) to display 2 decimal places
 
    return 0;
}
