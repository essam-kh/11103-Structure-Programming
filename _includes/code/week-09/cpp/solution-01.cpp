#include <iostream>
#include <string>
using namespace std;

int isPalindrome(const string& str, int start, int end) {
    if (start >= end) return 1;
    if (str[start] != str[end]) return 0;
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string word;
    cout << "Enter the word: ";
    cin >> word;

    if (isPalindrome(word, 0, word.length() - 1)) {
        cout << "Result: Yes\n";
    } else {
        cout << "Result: No\n";
    }
    return 0;
}
