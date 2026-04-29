#include <stdio.h>

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
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("Number of vowels: %d\n", countVowels(str, 0));
    return 0;
}
