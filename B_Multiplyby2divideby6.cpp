// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1374/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
#define For(a, b) for (auto &a : b)
const int MOD = 1e9 + 7;
const int maxN = 1e6 + 5;

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr)

void solve() {
  int n;
  cin >> n;

  int power2 = 0, power3 = 0;
  while (n % 2 == 0) {
    power2++;
    n /= 2;
  }
  while (n % 3 == 0) {
    power3++;
    n /= 3;
  }
  if (n > 1 || power2 > power3) {
    cout << -1 << endl;
  } else {
    cout << (power3 - power2) + power3 << endl;
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
