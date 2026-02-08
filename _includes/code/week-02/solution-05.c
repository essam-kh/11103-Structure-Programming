#include <stdio.h>

double CurrencyConvertor(double jod) {
    const double rate = 1.4112;
    return jod * rate;
}

int main() {
    double money_jod, money_usd;

    printf("Enter amount in JOD: ");
    scanf("%lf", &money_jod);

    money_usd = CurrencyConvertor(money_jod);

    printf("Amount in USD: %.4lf\n", money_usd);

    return 0;
}
