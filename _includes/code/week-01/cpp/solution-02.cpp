#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char ch;
    int integer;
    float decimal;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "Enter an integer: ";
    cin >> integer;

    cout << "Enter a float: ";
    cin >> decimal;

    cout << "The ASCII value of '" << ch << "' is " << (int)ch << endl;
    cout << "The square of " << integer << " is " << integer * integer << endl;
    cout << "The cube of " << fixed << setprecision(2) << decimal << " is " << decimal * decimal * decimal << endl;

    return 0;
}
