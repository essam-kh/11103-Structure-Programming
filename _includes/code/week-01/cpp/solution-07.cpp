#include <iostream>
using namespace std;

int main() {
    float num;

    cout << "Enter a floating-point number: ";
    cin >> num;

    
    int rounded = (int)(num + 0.5f);

    
    cout << "Rounded value: " << rounded << endl;

    return 0;
}
