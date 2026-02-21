#include <iostream>
#include <iomanip>
using namespace std;

double Power(float N, int M) {
    double result = 1.0;
    for (int i = 0; i < M; i++) {
        result *= N;
    }
    return result;
}

int DigitsNum(int N) {
    int count = 0;
    if (N == 0) return 1;
    while (N != 0) {
        N /= 10;
        count++;
    }
    return count;
}

double DigitsAvg(int N) {
    int sum = 0, count = 0, digit;
    int tempN = N;

    if (N == 0) return 0.0;

    while (tempN != 0) {
        digit = tempN % 10;
        sum += digit;
        tempN /= 10;
        count++;
    }
    return (double)sum / count;
}

int IsPrimeEfficient(int N) {
    if (N <= 1) return 0;
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) return 0;
    }
    return 1;
}

int main() {
    float fNum;
    int intNum, powerExp;

    cout << "Enter a float base and integer exponent for Power(): ";
    cin >> fNum >> powerExp;
    cout << "Result: " << fixed << setprecision(2) << Power(fNum, powerExp) << "\n\n";

    cout << "Enter a positive integer for Digit operations and Prime check: ";
    cin >> intNum;

    cout << "Number of digits: " << DigitsNum(intNum) << "\n";
    cout << "Average of digits: " << fixed << setprecision(2) << DigitsAvg(intNum) << "\n";

    if (IsPrimeEfficient(intNum)) {
        cout << intNum << " is Prime\n";
    } else {
        cout << intNum << " is Not Prime\n";
    }

    return 0;
}
