// time-limit: 1000
// problem-url: https://codeforces.com/contest/2092/problem/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
const int MOD = 1e9 + 7;
const int maxN = 1e6 + 5;

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr)

/*



*/

void solve() {
  int sz;
  cin >> sz;
  string a, b;
  vector<int> vc1, vc2;
  cin >> a >> b;

  int cnt1 = 0, cnt2 = 0;
  for (int i = 0; i < sz; i++) {
    if (i & 1) {
      if (a[i] == '1') {
        cnt2--;
      }
      if (b[i] == '0') {
        cnt1++;
      }
    } else {
      if (a[i] == '1') {
        cnt1--;
      }
      if (b[i] == '0') {
        cnt2++;
      }
    }
  }
  if (cnt1 >= 0 and cnt2 >= 0) {
    cout << "YES" << endl;
  } else
    cout << "NO" << endl;
}

int32_t main() {
  fastio;
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
