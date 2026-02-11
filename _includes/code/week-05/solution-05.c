#include <stdio.h>

int main() {
    int arr[50];
    int freq[11] = {0}; 
    int n;

    printf("Enter the number of elements (up to 50): ");
    scanf("%d", &n);

    printf("Enter %d quiz grades (0-10):\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] >= 0 && arr[i] <= 10) {
            freq[arr[i]]++;
        }
    }

    int maxFreq = -1;
    int mostFrequentVal = -1;

    for(int i = 0; i <= 10; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequentVal = i;
        }
    }

    printf("Most frequent element is: %d (appeared %d times)\n", mostFrequentVal, maxFreq);

    return 0;
}