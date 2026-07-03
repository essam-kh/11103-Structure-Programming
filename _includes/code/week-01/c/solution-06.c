#include <stdio.h>

int main() {
    int amount;

    
    printf("Enter amount in dollars: ");
    scanf("%d", &amount);

    
    int hundreds = amount / 100;
    amount %= 100;

    int twenties = amount / 20;
    amount %= 20;

    int fives = amount / 5;
    amount %= 5;

    int ones = amount;

    printf("$100 bills: %d\n", hundreds);
    printf("$20 bills: %d\n", twenties);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);

    return 0;
}
