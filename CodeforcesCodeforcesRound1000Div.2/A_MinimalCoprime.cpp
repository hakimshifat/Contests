// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/2063/A
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "
const int MOD = 1e9 + 7;

void solve() {
  int l, r;
  cin >> l >> r;
  if (l == 1 && r == 1) {
    cout << 1 << endl;
    return;
  }
  cout << r - l << endl;
  return;
}

int32_t main() {
  int test = 1;
  scanf("%lld", &test);
  while (test--) {
    solve();
  }
  return 0;
}
