#include <iostream>
using namespace std;

int countVowels(char str[], int index) {
    if (str[index] == '\0') {
        return 0;
    }
    char ch = str[index];
    int isVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                   ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') ? 1 : 0;
    return isVowel + countVowels(str, index + 1);
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    
    cout << "Number of vowels: " << countVowels(str, 0) << endl;
    return 0;
}
