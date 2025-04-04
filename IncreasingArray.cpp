// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1094
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
  int sz;
  cin >> sz;
  vector<int> vc(sz);
  int cnt = 0;
  for (auto &x : vc)
    cin >> x;
  for (int i = 1; i < vc.size(); i++) {
    if (vc[i] < vc[i - 1]) {
      cnt += vc[i - 1] - vc[i];
      vc[i] = vc[i - 1];
    }
  }
  cout << cnt << endl;
}

int32_t main() {
  fastio;
  int test = 1;
  while (test--) {
    solve();
  }
}
