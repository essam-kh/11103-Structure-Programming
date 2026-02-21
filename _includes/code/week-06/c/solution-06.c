#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Max(int arr[], int size) {
    int maxVal = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > maxVal) maxVal = arr[i];
    }
    return maxVal;
}

int SecondMax(int arr[], int size) {
    int maxVal = Max(arr, size);
    int secMax = -2147483648; 
    
    for(int i = 0; i < size; i++) {
        if(arr[i] != maxVal && arr[i] > secMax) {
            secMax = arr[i];
        }
    }
    return secMax;
}

int CountAbove(int arr[], int size, int score) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] >= score) count++;
    }
    return count;
}

int IndexOf(int arr[], int size, int score) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == score) return i;
    }
    return -1;
}

int MostAppeared(int arr[], int size) {
    int maxCount = 0;
    int mostElement = arr[0];
    
    for(int i = 0; i < size; i++) {
        int count = 0;
        for(int j = 0; j < size; j++) {
            if(arr[j] == arr[i]) count++;
        }
        if(count > maxCount) {
            maxCount = count;
            mostElement = arr[i];
        }
    }
    return mostElement;
}

void FillNoDuplicate(int arr[], int size, int low, int high) {
    int count = 0;
    while(count < size) {
        int num = (rand() % (high - low + 1)) + low;
        int found = 0;
        for(int i = 0; i < count; i++) {
            if(arr[i] == num) {
                found = 1;
                break;
            }
        }
        if(!found) {
            arr[count] = num;
            count++;
        }
    }
}

void PrintGrade(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    srand(time(0)); 
    int grades[70];
    int n, searchGrade;

    printf("Enter number of students (up to 70): ");
    scanf("%d", &n);

    printf("Enter grades:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &grades[i]);
    }

    printf("Max Grade: %d\n", Max(grades, n));
    printf("Second Max Grade: %d\n", SecondMax(grades, n));
    printf("Number of Passing Grades (>=50): %d\n", CountAbove(grades, n, 50));

    printf("Enter a grade to find its index: ");
    scanf("%d", &searchGrade);
    printf("Index of %d: %d\n", searchGrade, IndexOf(grades, n, searchGrade));
    
    printf("Most Appeared Grade: %d\n", MostAppeared(grades, n));
    
    printf("Grades entered: ");
    PrintGrade(grades, n);

    int randomGrades[70];
    printf("\nFilling new array with unique random numbers (0-100)...\n");
    FillNoDuplicate(randomGrades, n, 0, 100);
    PrintGrade(randomGrades, n);

    return 0;
}