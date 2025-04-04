// time-limit: 1000
// problem-url: https://codeforces.com/contest/2091/problem/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
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
  int ans = 0;
  vector<int> vc(sz);
  for (auto &x : vc)
    cin >> x;
  int fq[10]{0};
  for (int i = 0; i < sz; i++) {
    fq[vc[i]]++;
    if (fq[0] >= 3 && fq[1] >= 1 && fq[2] >= 2 && fq[3] >= 1 && fq[5] >= 1) {
      ans = i + 1;
      break;
    }
  }
  cout << ans << endl;
}

int32_t main() {
  fastio;
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
