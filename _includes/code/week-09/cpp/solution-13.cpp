#include <iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    if (size == 0 || size == 1)
        return true;
    if (arr[size - 1] < arr[size - 2])
        return false;
    return isSorted(arr, size - 1);
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    
    int arr[size];
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    if (isSorted(arr, size)) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }
    
    return 0;
}
