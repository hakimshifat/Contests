// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/2063/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve() {
  int b, a;
  cin >> b >> a;
  if (a == 1 && b == 1) {
    cout << 1 << endl;
    return;
  }
  cout << a - b << endl;
}

int32_t main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
