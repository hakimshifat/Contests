// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1535/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long int
#define pb push_back
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
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
  vector<int> vc(4);
  for (auto &x : vc)
    cin >> x;
  if ((max(vc[0], vc[1]) < min(vc[2], vc[3])) ||
      (min(vc[0], vc[1]) > max(vc[2], vc[3]))) {
    cout << "NO" << endl;
  } else
    cout << "YES" << endl;
}

int32_t main() {
  fastio;
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
