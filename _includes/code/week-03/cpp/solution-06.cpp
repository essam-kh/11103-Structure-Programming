#include <iostream>

using namespace std;

void CharTest(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        cout << "Alphabet\n";
    } else if (c >= '0' && c <= '9') {
        cout << "Digit\n";
    } else {
        cout << "Special Character\n";
    }
}

int main() {
    char ch;
    cout << "Enter character: ";
    cin >> ch;
    CharTest(ch);
    return 0;
}
