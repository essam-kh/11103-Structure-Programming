#include <stdio.h>
#include <math.h>

int binaryToDecimal(char binary[], int length, int power) {
    if (length == 0) 
        return 0;
    int bit = binary[length - 1] - '0';
    return bit * (int)pow(2, power) + binaryToDecimal(binary, length - 1, power + 1);
}

int main() {
    char binary[100];
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    int length = 0;
    while (binary[length] != '\0') {
        length++;
    }
    
    printf("Decimal representation: %d\n", binaryToDecimal(binary, length, 0));
    return 0;
}