// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/2072/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
  int n, k, p;
  cin >> n >> k >> p;
  if (-n * p <= k && k <= n * p) {
    cout << (abs(k) + p - 1) / p << endl;
  } else {
    cout << -1 << endl;
  }
}

int32_t main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
