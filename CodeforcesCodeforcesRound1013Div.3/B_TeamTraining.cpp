// time-limit: 2000
// problem-url: https://codeforces.com/contest/2091/problem/B
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

6 4
4 5 3 3 2 6

strength = 2 * 6 = 12


*/

void solve() {
  int sz, minstr;
  cin >> sz >> minstr;

  int team = 0;
  vector<int> vc(sz);
  for (auto &x : vc) {
    cin >> x;
  }
  sort(vc.begin(), vc.end(), greater<int>());

  int cnt = 0;
  for (auto &x : vc) {
    cnt++;
    if (cnt * x >= minstr) {
      team++;
      cnt = 0;
    }
  }
  cout << team << endl;
}

int32_t main() {
  fastio;
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
