// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1834/A
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
  int positives = 0;
  int negatives = 0;

  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    if (input == 1)
      positives++;
    else
      negatives++;
  }

  int operations = 0;

  while (positives < negatives) {
    positives++;
    negatives--;
    operations++;
  }

  if (negatives % 2 == 1) {
    positives--;
    negatives++;
    operations++;
  }

  cout << operations << endl;
}

int32_t main() {
  fastio;
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
