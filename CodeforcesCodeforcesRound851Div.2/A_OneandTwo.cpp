// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1788/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
#define For(a, b) for (auto &a : b)
const int MOD = 1e9 + 7;
const int maxN = 1e6 + 5;

long long power(long long base, long long exp) {
  long long res = 1;
  base %= MOD;
  while (exp > 0) {
    if (exp % 2 == 1)
      res = (res * base) % MOD;
    base = (base * base) % MOD;
    exp /= 2;
  }
  return res;
}

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr)

void solve() {
  int sz;
  cin >> sz;
  int sum = 0;
  vector<int> vc(sz);
  for (int i = 0; i < sz; i++) {
    cin >> vc[i];
    sum += vc[i] - 1;
  }
  if (sum & 1) {
    cout << -1 << endl;
    return;
  }
  int s = 0;
  for (int i = 0; i < sz; i++) {
    s += vc[i] - 1;
    if (s == sum / 2) {
      cout << i + 1 << endl;
      return;
    }
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
