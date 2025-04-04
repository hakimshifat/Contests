// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/112/A
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
  string a, b;
  getline(cin, a);
  getline(cin, b);
  for (auto &x : a)
    x = tolower(x);
  for (auto &x : b)
    x = tolower(x);

  for (int i = 0; i < a.size(); i++) {
    if (a[i] < b[i]) {
      cout << -1 << endl;
      return;
    } else if (a[i] > b[i]) {
      cout << 1 << endl;
      return;
    }
  }
  cout << 0 << endl;
}

int32_t main() {
  fastio;
  int test = 1;
  while (test--) {
    solve();
  }
}
