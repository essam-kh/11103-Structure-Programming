#include <iostream>
using namespace std;

int CountSubsequences(int arr[], int size, int index, int currentSum, int targetSum) {
    if (index == size) {
        return currentSum == targetSum ? 1 : 0;
    }

    int take = CountSubsequences(arr, size, index + 1, currentSum + arr[index], targetSum);
    int dontTake = CountSubsequences(arr, size, index + 1, currentSum, targetSum);

    return take + dontTake;
}

int main() {
    int size, targetSum;
    int arr[50];

    cout << "Enter number of elements: ";
    cin >> size;

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> targetSum;

    int count = CountSubsequences(arr, size, 0, 0, targetSum);
    cout << "Number of subsequences: " << count << endl;

    return 0;
}
