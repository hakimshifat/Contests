// time-limit: 1500
// problem-url: https://codeforces.com/contest/2051/problem/C
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "

void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> a(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }
  vector<int> q(k);
  for (int i = 0; i < k; i++) {
    cin >> q[i];
  }

  vector<bool> used(n + 1, 0);

  for (int i : q) {
    used[i] = 1;
  }

  int l = q.size();

  for (int i = 0; i < m; i++) {
    if (l == n || (l == n - 1 && !used[a[i]])) {
      cout << 1;
    } else {
      cout << 0;
    }
  }
  cout << endl;
}

int32_t main() {
  int test = 1;
  scanf("%lld", &test);
  while (test--) {
    solve();
  }
  return 0;
}
