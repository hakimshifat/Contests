// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1713
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long int
#define pb push_back
#define all(x) x.begin(), x.end()
const int MOD = 1e9 + 7;
const int maxN = 1e6 + 5;

int numdiv[maxN]{0};
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

void calculateDiv(int numdiv[]) {
  for (int i = 1; i < maxN; i++) {
    for (int j = i; j < maxN; j += i) {
      numdiv[j]++;
    }
  }
}

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr)

void solve() {
  int n;
  cin >> n;
  cout << numdiv[n] << endl;
}

int32_t main() {
  calculateDiv(numdiv);
  fastio;
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
