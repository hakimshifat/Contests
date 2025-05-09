// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long int
#define pb push_back
#define all(x) x.begin(), x.end()
const int MOD = 1e9 + 7;
const int maxN = 1e5 + 5;

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
  string s;
  cin >> s;
  string m;
  sort(all(s));
  for (auto &c : s) {
    if (c >= '0' && c <= '9') {
      m.pb(c);
      m.pb('+');
    }
  }
  m.pop_back();
  cout << m << endl;
}

int32_t main() {
  fastio;
  int test = 1;
  while (test--) {
    solve();
  }
}
