#include <iostream>

using namespace std;

void VowelTest(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        cout << c << " is a Vowel\n";
    } else {
        cout << c << " is a Consonant\n";
    }
}

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    VowelTest(ch);
    return 0;
}
