// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1083
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
  for (auto &x : vc)
    cin >> x;
  int a = sz;
  int sum = (a * (a + 1)) / 2;
  int sum1 = 0;
  for (auto &x : vc)
    sum1 += x;
  cout << abs(sum - sum1);
}

int32_t main() {
  fastio;
  int test = 1;
  while (test--) {
    solve();
  }
}
