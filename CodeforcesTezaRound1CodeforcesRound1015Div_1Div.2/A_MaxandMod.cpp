// time-limit: 1000
// problem-url: https://codeforces.com/contest/2084/problem/A
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
  int n;
  cin >> n;

  if (n == 2 || n == 4) {
    cout << -1 << endl;
    return;
  }

  if (n == 3) {
    cout << "3 2 1" << endl;
    return;
  }

  // Create a 1-indexed vector to match the problem statement
  vector<int> vc(n + 1);
  vc[1] = 1;
  vc[2] = n;
  for (int i = 3; i <= n; i++) {
    vc[i] = i - 1;
  }

  // Verify the solution
  bool valid = true;
  for (int i = 2; i <= n; i++) {
    int maxi = max(vc[i], vc[i - 1]);
    if (maxi % i != i - 1) {
      valid = false;
      break;
    }
  }

  if (!valid) {
    cout << -1 << endl;
    return;
  }

  // Output the permutation
  for (int i = 1; i <= n; i++) {
    cout << vc[i] << (i < n ? " " : "");
  }
  cout << endl;
}

int32_t main() {
  fastio;
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
