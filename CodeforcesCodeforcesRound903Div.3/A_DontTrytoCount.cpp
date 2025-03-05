// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1881/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
void solve() {
  int a, b;
  cin >> a >> b;
  string a1, b1;
  cin >> a1 >> b1;

  int n = 0;
  int m = 6;
  while (m--) {
    if (a1.find(b1) == string::npos) {
      a1 += a1;
      n++;
    } else {
      cout << n << endl;
      return;
    }
  }
  cout << -1 << endl;
}

int32_t main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
