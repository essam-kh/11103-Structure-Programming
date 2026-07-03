#include <iostream>
using namespace std;

void FindMinMax(int *arr, int size, int *min, int *max) {
    *min = *arr;
    *max = *arr;
    for (int i = 1; i < size; i++) {
        int val = *(arr + i);
        if (val < *min) {
            *min = val;
        }
        if (val > *max) {
            *max = val;
        }
    }
}

int main() {
    int size;
    int arr[50];
    int min, max;

    cout << "Enter number of elements: ";
    cin >> size;

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    FindMinMax(arr, size, &min, &max);

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}
