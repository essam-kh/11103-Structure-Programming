#include <iostream>
using namespace std;

int countDigits(int num, int target) {
    if (num == 0) 
        return 0;
    int lastDigit = num % 10;
    if (lastDigit == target) 
        return 1 + countDigits(num / 10, target);
    else 
        return countDigits(num / 10, target);
}

int main() {
    int num, target;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter digit to count: ";
    cin >> target;
    cout << "Count: " << countDigits(num, target) << endl;
    
    return 0;
}
