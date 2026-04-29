#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(char binary[], int length, int power) {
    if (length == 0) 
        return 0;
    int bit = binary[length - 1] - '0';
    return bit * (int)pow(2, power) + binaryToDecimal(binary, length - 1, power + 1);
}

int main() {
    char binary[100];
    cout << "Enter a binary number: ";
    cin >> binary;
    
    int length = 0;
    while (binary[length] != '\0') {
        length++;
    }
    
    cout << "Decimal representation: " << binaryToDecimal(binary, length, 0) << endl;
    return 0;
}
