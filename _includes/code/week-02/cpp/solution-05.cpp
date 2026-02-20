#include <iostream>
#include <iomanip>

using namespace std;

double CurrencyConvertor(double jod) {
    const double rate = 1.4112;
    return jod * rate;
}

int main() {
    double money_jod, money_usd;

    cout << "Enter amount in JOD: ";
    cin >> money_jod;

    money_usd = CurrencyConvertor(money_jod);

    cout << "Amount in USD: " << fixed << setprecision(4) << money_usd << endl;

    return 0;
}
