#include <iostream>

using namespace std;

void WeatherState(int temp) {
    if (temp < 0) {
        cout << "Freezing weather\n";
    } else if (temp >= 0 && temp < 10) {
        cout << "Very Cold weather\n";
    } else if (temp >= 10 && temp < 20) {
        cout << "Cold weather\n";
    } else if (temp >= 20 && temp < 30) {
        cout << "Normal in Temp\n";
    } else if (temp >= 30 && temp < 40) {
        cout << "It's Hot\n";
    } else {
        cout << "It's Very Hot\n";
    }
}

int main() {
    int t;
    cout << "Enter temperature: ";
    cin >> t;
    WeatherState(t);
    return 0;
}
