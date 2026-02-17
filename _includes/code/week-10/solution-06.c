#include <stdio.h>

int main() {
    int n;
    int a[100];
    int *ptr = a; 
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *left = a;
    int *right = &a[n - 1];
    
    printf("Enter elements:\n");
    while(left<=right){
        scanf(" %d", left);
        left++;
    }
    printf("Reversed array:\n");
    left = a;
    right = &a[n - 1];
    while(left<=right){
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
    left = a;
    right = &a[n - 1];
    while(left<=right){
        printf("%d ", *left);
        left++;
    }
    printf("\n");

    return 0;
}
