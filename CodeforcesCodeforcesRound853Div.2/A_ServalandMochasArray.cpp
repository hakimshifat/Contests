// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1789/A
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
  int n;
  cin >> n;
  vector<int> vc(n);
  for (auto &x : vc)
    cin >> x;
  int gg;
  for (int i = 0; i < n - 1; i += 2) {
    gg = __gcd(vc[i], vc[i + 1]);
  }
  if (gg >= n) {
    cout << "No" << endl;
    return;
  } else {
    cout << "Yes" << endl;
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
