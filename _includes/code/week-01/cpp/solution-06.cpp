#include <iostream>
using namespace std;

int main() {
    int amount;

    
    cout << "Enter amount in dollars: ";
    cin >> amount;

    
    int hundreds = amount / 100;
    amount %= 100;

    int twenties = amount / 20;
    amount %= 20;

    int fives = amount / 5;
    amount %= 5;

    int ones = amount;

    
    cout << "$100 bills: " << hundreds << endl;
    cout << "$20 bills: " << twenties << endl;
         cout << "$5 bills: " << fives << endl;
    cout << "$1 bills: " << ones << endl;

    return 0;
}
