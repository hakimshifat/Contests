#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;
    int numerator = x - y + 1;
    if (numerator % 9 != 0) {
      cout << "No" << endl;
    } else {
      int k = numerator / 9;
      if (k >= 0 && 9 * k <= x) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
  return 0;
}
