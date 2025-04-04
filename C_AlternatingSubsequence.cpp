// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1343/C
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
#define For(a, b) for (auto &a : b)
const int MOD = 1e9 + 7;
const int maxN = 1e6 + 5;

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr)

void solve() {
  int sz;
  cin >> sz;
  vector<int> arr(sz);
  for (auto &x : arr)
    cin >> x;

  int ans = 0;
  for (int i = 0; i < sz; i++) {
    int j = i;
    int maxi = -2e18;
    while (j < sz and
           ((arr[i] > 0 and arr[j] > 0) or (arr[i] < 0 and arr[j] < 0))) {
      maxi = max(maxi, arr[j]);
      j++;
    }
    ans += maxi;
    i = j - 1;
  }
  cout << ans << endl;
}

int32_t main() {
  fastio;
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
