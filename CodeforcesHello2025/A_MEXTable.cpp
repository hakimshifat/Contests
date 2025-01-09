// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/2057/A
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "
const int MOD = 1e9 + 7;

void solve() {
  int a, b;
  cin >> a >> b;
  cout << max(a, b) + 1 << endl;
}

int32_t main() {
  int test = 1;
  scanf("%lld", &test);
  while (test--) {
    solve();
  }
  return 0;
}
