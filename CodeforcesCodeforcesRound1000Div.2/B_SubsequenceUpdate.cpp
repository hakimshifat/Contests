// time-limit: 1500
// problem-url: https://codeforces.com/problemset/problem/2063/B
#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
  int n, l, r;
  cin >> n >> l >> r;
  l--;
  vector<int> vc(n);
  for (int i = 0; i < n; i++) {
    cin >> vc[i];
  }

  vector<int> aa(vc);
  vector<int> bb(vc);
  sort(aa.begin() + l, aa.end());
  sort(bb.begin(), bb.begin() + r, greater<int>());

  int sum_aa = accumulate(aa.begin() + l, aa.begin() + r, 0);
  int sum_bb = accumulate(bb.begin() + l, bb.begin() + r, 0);

  cout << min(sum_aa, sum_bb) << endl;
}

int32_t main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
