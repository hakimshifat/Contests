// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1805/A
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
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int xor_all = 0;
  for (int i = 0; i < n; i++) {
    xor_all ^= a[i];
  }

  if (n % 2 == 0) {
    if (xor_all == 0) {
      cout << 0 << endl;
    } else {
      cout << -1 << endl;
    }
  } else {
    cout << xor_all << endl;
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
