// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1862/B
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
  int bl;
  cin >> bl;
  vector<int> vc;

  for (int i = 0; i < bl; i++) {
    int a;
    cin >> a;
    if (a && !vc.empty() && vc.back() > a) {
      vc.push_back(1);
    }
    vc.push_back(a);
  }
  cout << vc.size() << endl;
  for (auto &x : vc) {
    cout << x << " ";
  }
  cout << endl;
}

int32_t main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
