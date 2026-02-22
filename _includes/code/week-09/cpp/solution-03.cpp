#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

float computeVolume(float V, int N) {
    if (N == 0) return V;

    float prevVol = computeVolume(V, N - 1);

    int prob = rand() % 100;
    float currentVol = prevVol;

    if (prob < 30) {
        currentVol = prevVol * 1.01;
        cout << "Day " << N << ": Rainy (Vol: " << fixed << setprecision(2) << currentVol << ")\n";
    } else if (prob < 65) {
        currentVol = prevVol * 0.98;
        cout << "Day " << N << ": Sunny (Vol: " << fixed << setprecision(2) << currentVol << ")\n";
    } else {
        cout << "Day " << N << ": Cloudy (Vol: " << fixed << setprecision(2) << currentVol << ")\n";
    }

    return currentVol;
}

int main() {
    srand(time(0));
    float startVolume;
    int days;

    cout << "Enter initial volume and number of days: ";
    cin >> startVolume >> days;

    float finalVol = computeVolume(startVolume, days);
    cout << "Final Volume: " << fixed << setprecision(2) << finalVol << "\n";
    return 0;
}
