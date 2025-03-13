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

int32_t main() {
  fastio;
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &x : a)
    cin >> x;

  // We'll try both possibilities:
  // 1. Start with positive
  // 2. Start with negative
  // Then choose the one that requires fewer operations

  int ops1 = 0; // Operations needed if we start with positive
  int ops2 = 0; // Operations needed if we start with negative

  // Case 1: Start with positive
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) { // Even positions should be positive
      if (a[i] < 0)
        ops1++;
    } else { // Odd positions should be negative
      if (a[i] > 0)
        ops1++;
    }
  }

  // Case 2: Start with negative
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) { // Even positions should be negative
      if (a[i] > 0)
        ops2++;
    } else { // Odd positions should be positive
      if (a[i] < 0)
        ops2++;
    }
  }

  // Output the minimum number of operations
  cout << min(ops1, ops2) << endl;

  return 0;
}
