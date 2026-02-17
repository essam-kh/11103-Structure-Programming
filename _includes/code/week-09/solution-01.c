#include <stdio.h>

int isPalindrome(char str[], int start, int end) {
    if (start >= end) {
        return 1;
    }
    if (str[start] != str[end]) {
        return 0;
    }
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char word[100];
    printf("Enter the word: ");
    scanf("%s", word);
    
    int length, i = 0;
    while (word[i] != '\0') {
        i++;
    }
    length = i;
    
    // Updated output to match worksheet example
    if (isPalindrome(word, 0, length - 1)) {
        printf("Result: Yes\n");
    } else {
        printf("Result: No\n");
    }
    return 0;
}