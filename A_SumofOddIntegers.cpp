// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1327/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long int

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr)

void solve() {
  int a, b;
  cin >> a >> b;
  if (a & 1) {
    if (b * b > a || b % 2 == 0) {
      cout << "NO" << endl;
      return;
    } else
      cout << "YES" << endl;
  } else {
    if (b * b > a || b % 2 != 0) {
      cout << "NO" << endl;
      return;
    } else
      cout << "YES" << endl;
  }
}

int32_t main() {
  fastio;
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
