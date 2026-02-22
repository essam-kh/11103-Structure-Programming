#include <iostream>
#include <string>
using namespace std;

void printReverse(const string& str, int n) {
    if (n == 0) return;
    cout << str[n - 1];
    printReverse(str, n - 1);
}

int main() {
    string word;
    cout << "Enter the string: ";
    cin >> word;

    cout << "Reversed: ";
    printReverse(word, word.length());
    cout << "\n";
    return 0;
}
