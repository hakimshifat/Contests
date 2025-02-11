// time-limit: 1000
// problem-url: https://codeforces.com/contest/9/problem/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

int32_t main() {
  int a, b;
  cin >> a >> b;
  if (a % b == 0) {
    while (a % b != 0) {
      a /= b;
      b = 1;
    }
  }
  if (a % b != 0) {
    cout << a << "/" << b;
  }
}
