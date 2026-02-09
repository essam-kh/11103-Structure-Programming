#include <stdio.h>

void VowelTest(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        printf("%c is a Vowel\n", c);
    } else {
        printf("%c is a Consonant\n", c);
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    VowelTest(ch);
    return 0;
}
