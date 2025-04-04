// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1335/C
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
  vector<int> a, b;
  cin >> sz;
  vector<int> vc(sz);
  for (auto &x : vc)
    cin >> x;
  unordered_map<int, int> fq;
  for (auto &x : vc)
    fq[x]++;

  int uniqueCount = 0;
  for (auto &x : fq) {
    uniqueCount = max(uniqueCount, x.second);
  }
  int diff = fq.size();
  if (uniqueCount == diff) {
    cout << uniqueCount - 1 << endl;
  } else if (uniqueCount > diff) {
    cout << min(uniqueCount - 1, diff) << endl;
  } else {
    cout << min(uniqueCount, diff - 1) << endl;
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
