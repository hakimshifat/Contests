// time-limit: 1000
// problem-url: https://codeforces.com/contest/732/problem/A
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "

int32_t main() {
  int price, oneE;
  cin >> price >> oneE;

  for (int i = 1; i < 10000; i++) {
    if (price * i % 10 == 0 || price * i % 10 == oneE) {
      cout << i;
      break;
    }
  }
}
