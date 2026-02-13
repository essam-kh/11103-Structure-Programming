#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];
    int totalSum = 0;

    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            totalSum += matrix[i][j];
        }
    }

    printf("\nSum of all elements: %d\n", totalSum);

    for (int j = 0; j < c; j++) {
        int max = matrix[0][j];
        int colSum = 0;
        
        for (int i = 0; i < r; i++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
            colSum += matrix[i][j];
        }

        int freq[max + 1]={0}; 
        for (int i = 0; i < r; i++) {
            freq[matrix[i][j]]++;
        }

        int mode = -1;
        int maxCount = 0;
        
        for (int k = 0; k <= max; k++) {
            if (freq[k] > maxCount) {
                maxCount = freq[k];
                mode = k;
            }
        }
        
        float avg = (float)colSum / r;
        printf("Column %d: Max = %d, Average = %.2f, Mode = %d\n", j + 1, max, avg, mode);
    }

    return 0;
}
