// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1499/B
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
  int cnt = 0;
  string s;
  cin >> s;
  int y = 0;
  int flag = 0;
  if (is_sorted(all(s))) {
    cout << "YES" << endl;
    return;
  } else {
    for (int i = s.length() - 1; i > 0; i--) {
      if (s[i] == '0' && s[i - 1] == '0') {
        y = i - 1;
        flag = 1;
        break;
      }
    }
    if (flag == 0) {
      cout << "YES" << endl;
      return;
    }
    flag = 0;
    for (int i = y; i > 0; i--) {
      if (s[i] == '1' && s[i - 1] == '1') {
        flag = 1;
        break;
      }
    }
    if (flag == 1) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
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
