// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1857/A
#include <bits/stdc++.h>
using namespace std;
#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr)
#define endl '\n'
#define int long long int
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define For(i, a, b) for (int i = (a); i < (b); i++)
#define FoR(i, a, b) for (int i = (a); i <= (b); i++)
#define debug(x) cerr << #x << " = " << x << endl
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

void solve() {
  int n;
  cin >> n;
  int sum = 0;
  int x;
  while (n--) {
    cin >> x;
    sum += x;
  }
  (sum % 2 == 0) ? cout << "YES\n" : cout << "NO\n";
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
