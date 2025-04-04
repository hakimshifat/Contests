// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1512/A
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
  int input;
  cin >> sz;
  vector<int> vc(sz);
  unordered_map<int, int> freq;
  for (auto &x : vc) {
    cin >> x;
    freq[x]++;
  }
  int uq = 0;
  for (auto &x : freq) {
    if (x.second == 1) {
      uq = x.first;
      break;
    }
  }
  for (int i = 0; i < vc.size(); i++) {
    if (vc[i] == uq) {
      cout << i + 1 << endl;
      return;
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
