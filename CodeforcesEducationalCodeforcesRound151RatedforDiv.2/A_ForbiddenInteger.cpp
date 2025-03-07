// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1845/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long int
#define pb push_back
#define all(x) x.begin(), x.end()
const int MOD = 1e9 + 7;
const int maxN = 1e5 + 5;
#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr)

void solve() {
  int n, k, x;
  cin >> n >> k >> x;

  if (x != 1) {
    cout << "YES" << endl;
    cout << n << endl;
    for (int i = 0; i < n; i++) {
      cout << 1;
      if (i < n - 1)
        cout << " ";
    }
    cout << endl;
  } else if (k == 1 || (k == 2 && n % 2 == 1)) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
    cout << n / 2 << endl;

    if (n % 2 == 1) {
      cout << 3;
    } else {
      cout << 2;
    }

    for (int i = 0; i < n / 2 - 1; i++) {
      cout << " " << 2;
    }
    cout << endl;
  }
}

int32_t main() {
  fastio;
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
  return 0;
}
