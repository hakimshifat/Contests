// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1853/A
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
  vector<int> vc1;
  for (auto &x : vc)
    cin >> x;
  if (!is_sorted(all(vc))) {
    cout << 0 << endl;
    return;
  } else {
    int min_diff = INT_MAX;
    for (int i = 0; i < vc.size() - 1; i++) {
      min_diff = min(min_diff, (vc[i + 1] - vc[i]));
    }
    cout << 1 + min_diff / 2 << endl;
  }
}

int32_t main() {
  fastio;
  int test = 1;
  cin >> test;
  while (test--) {
    // cout << "Case #" << t << ": ";
    solve();
  }
}
