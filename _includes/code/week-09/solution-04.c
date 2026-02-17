#include <stdio.h>

void printReverse(char str[], int n) {
    if (n == 0) {
        return;
    }
    printf("%c", str[n - 1]);
    printReverse(str, n - 1);
}

int main() {
    char word[100];
    printf("Enter the string: ");
    scanf("%s", word);
    
    int length, i = 0;
    while (word[i] != '\0') {
        i++;
    }
    length = i;
    
    printf("Reversed: ");
    printReverse(word, length);
    printf("\n");
    return 0;
}
