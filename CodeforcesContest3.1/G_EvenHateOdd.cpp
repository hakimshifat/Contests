// time-limit: 5000
// problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G
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
  if (vc.size() & 1) {
    cout << -1 << endl;
    return;
  }
  int e = 0, o = 0;
  for (auto &x : vc) {
    if (x % 2 == 0) {
      e++;
    } else {
      o++;
    }
  }
  cout << abs(e - o) / 2 << endl;
}

int32_t main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
