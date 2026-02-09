#include <stdio.h>

void printAscending(int n1, int n2, int n3) {
    int temp;
    
    if (n1 > n2) { temp = n1; n1 = n2; n2 = temp; }
    if (n1 > n3) { temp = n1; n1 = n3; n3 = temp; }
    if (n2 > n3) { temp = n2; n2 = n3; n3 = temp; }
    
    printf("Numbers in Ascending Order: %d %d %d\n", n1, n2, n3);
}

int main() {
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printAscending(a, b, c);
    return 0;
}
