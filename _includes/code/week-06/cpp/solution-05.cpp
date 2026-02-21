#include <iostream>
using namespace std;

int main() {
    int arr[50];
    int freq[11] = {0};
    int n;

    cout << "Enter the number of elements (up to 50): ";
    cin >> n;

    cout << "Enter " << n << " quiz grades (0-10):\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] >= 0 && arr[i] <= 10) {
            freq[arr[i]]++;
        }
    }

    int maxFreq = -1;
    int mostFrequentVal = -1;

    for (int i = 0; i <= 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequentVal = i;
        }
    }

    cout << "Most frequent element is: " << mostFrequentVal << " (appeared " << maxFreq << " times)\n";

    return 0;
}
