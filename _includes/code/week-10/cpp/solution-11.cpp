#include <iostream>
using namespace std;

int SumRange(const int *start, const int *end) {
    int sum = 0;
    while (start < end) {
        sum += *start;
        start++;
    }
    return sum;
}

int main() {
    int size;
    int arr[50];
    int startIdx, endIdx;

    cout << "Enter number of elements: ";
    cin >> size;

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter start and end indexes: ";
    cin >> startIdx >> endIdx;

    int sum = SumRange(&arr[startIdx], &arr[endIdx]);
    cout << "Sum: " << sum << endl;

    return 0;
}
