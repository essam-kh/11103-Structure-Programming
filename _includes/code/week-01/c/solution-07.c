#include <stdio.h>

int main() {
    float num;

    
    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    
    int rounded = (int)(num + 0.5f);

    
    printf("Rounded value: %d\n", rounded);

    return 0;
}
