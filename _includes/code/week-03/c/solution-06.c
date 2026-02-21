#include <stdio.h>

void CharTest(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("Alphabet\n");
    } else if (c >= '0' && c <= '9') {
        printf("Digit\n");
    } else {
        printf("Special Character\n");
    }
}

int main() {
    char ch;
    printf("Enter character: ");
    scanf(" %c", &ch);
    CharTest(ch);
    return 0;
}
