// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1083
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long int
#define pb push_back
#define all(x) x.begin(), x.end()
#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr)

void solve() {
  int sz;
  cin >> sz;
  vector<int> vc(sz);
  for (auto &x : vc)
    cin >> x;
  int a = sz;
  int sum = (a * (a + 1)) / 2;
  int sum1 = 0;
  for (auto &x : vc)
    sum1 += x;
  cout << abs(sum - sum1);
}

int32_t main() {
	fastio;
  int test = 1;
  while (test--) {
    solve();
  }
}
