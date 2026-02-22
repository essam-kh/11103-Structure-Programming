#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float computeVolume(float V, int N) {
    if (N == 0) {
        return V;
    }

    float prevVol = computeVolume(V, N - 1);

    int prob = rand() % 100;
    float currentVol = prevVol;

    if (prob < 30) {
        currentVol = prevVol * 1.01;
        printf("Day %d: Rainy (Vol: %.2f)\n", N, currentVol);
    } else if (prob < 65) {
        currentVol = prevVol * 0.98;
        printf("Day %d: Sunny (Vol: %.2f)\n", N, currentVol);
    } else {
        printf("Day %d: Cloudy (Vol: %.2f)\n", N, currentVol);
    }

    return currentVol;
}

int main() {
    srand(time(0));
    float startVolume;
    int days;

    printf("Enter initial volume and number of days: ");
    scanf("%f %d", &startVolume, &days);

    float finalVol = computeVolume(startVolume, days);
    printf("Final Volume: %.2f\n", finalVol);
    return 0;
}
