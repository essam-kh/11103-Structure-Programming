#include <stdio.h>

int countDigits(int num, int target) {
    if (num == 0) 
        return 0;
    int lastDigit = num % 10;
    if (lastDigit == target) 
        return 1 + countDigits(num / 10, target);
    else 
        return countDigits(num / 10, target);
}

int main() {
    int num, target;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter digit to count: ");
    scanf("%d", &target);
    printf("Count: %d\n", countDigits(num, target));
    
    return 0;
}
