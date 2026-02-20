#include <iostream>
using namespace std;

int main() {
  int n;
  int d1, d2, d3, d4;
  
  cout << "please enter number of 4 digits\n";
  cin >> n;
  
  d1 = n % 10;
  d2 = (n / 10) % 10;
  d3 = ((n / 10) / 10) % 10;
  d4 = ((n / 10) / 10 / 10) % 10;
  
  cout << n << "=" << d4 * 1000 << "+" << d3 * 100 << "+" << d2 * 10 << "+" << d1 << endl;
  
  return 0;
}
