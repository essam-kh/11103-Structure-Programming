#include <iostream>
using namespace std;

int RemoveDuplicates(int arr[], int size);

int main() {
    int size;
    int arr[50];

    cout << "Enter the number of elements: ";
    cin >> size;

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int newSize = RemoveDuplicates(arr, size);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nNew size: " << newSize << endl;

    return 0;
}

int RemoveDuplicates(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--;
                j--;
            }
        }
    }
    return size;
}
