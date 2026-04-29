#include <iostream>
using namespace std;

int countOccurrences(int arr[], int size, int target) {
    if (size == 0) 
        return 0;
    
    if (arr[size - 1] == target)
        return 1 + countOccurrences(arr, size - 1, target);
    else
        return countOccurrences(arr, size - 1, target);
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
    int target;
    cout << "Enter target: ";
    cin >> target;
    cout << "Count: " << countOccurrences(arr, size, target) << endl;
    return 0;
}
