#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    char *start = str;
    char *end = str;

    while (*end != '\0') {
        end++;
    }
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
        printf("The string is a Palindrome.\n");
    } else {
        printf("The string is NOT a Palindrome.\n");
    }

    return 0;
}