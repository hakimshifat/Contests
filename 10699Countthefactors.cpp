// time-limit: 3000
// problem-url:
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1640
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "
const int MOD = 1e9 + 7;

int primeFactor(int n) {
  int pFactors = 0;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      while (n % i == 0) {
        n /= i;
      }
      pFactors++;
    }
  }
  if (n > 1)
    pFactors++;
  return pFactors;
}

int32_t main() {
  int input;
  while (cin >> input) {
    if (input == 0) {
      break;
    }
    cout << input << " : " << primeFactor(input) << endl;
  }
}
