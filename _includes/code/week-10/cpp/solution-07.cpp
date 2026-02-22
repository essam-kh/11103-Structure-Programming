#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    char *start = str;
    char *end = str;

    while (*end != '\0') end++;
    end--;

    int isPalindrome = 1;
    while (start < end) {
        if (*start != *end) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        cout << "The string is a Palindrome.\n";
    } else {
        cout << "The string is NOT a Palindrome.\n";
    }

    return 0;
}
