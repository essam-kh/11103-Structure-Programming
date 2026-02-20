#include <stdio.h>

int main() {
    char ch;
    int integer;
    float decimal;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Enter an integer: ");
    scanf("%d", &integer);

    printf("Enter a float: ");
    scanf("%f", &decimal);

    printf("The ASCII value of '%c' is %d\n", ch, ch);
    printf("The square of %d is %d\n", integer, integer * integer);
    printf("The cube of %.2f is %.2f\n", decimal, decimal * decimal * decimal);

    return 0;
}
