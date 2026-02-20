#include <iostream>
#include <iomanip>

using namespace std;

double DigitsNum(int num) {
    int d1, d2, d3;
    
    d1 = num % 10;
    d2 = (num / 10) % 10;
    d3 = num / 100;
    
    double sum = d1 + d2 + d3;
    
    return sum / 3;
}

int main() {
    int number;
    double average;

    cout << "Enter a 3-digit integer: ";
    cin >> number;

    average = DigitsNum(number);

    cout << "The average of the digits is: " << fixed << setprecision(2) << average << endl;

    return 0;
}
