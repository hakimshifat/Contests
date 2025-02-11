// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1901/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
  int gasStation, distance;
  cin >> gasStation >> distance;
  int prev = 0, ans = 0;
  for (int i = 0; i < gasStation; i++) {
    int a;
    cin >> a;
    ans = max(ans, a - prev);
    prev = a;
  }
  ans = max(ans, 2 * (distance - prev));
  cout << ans << endl;
}

int32_t main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
