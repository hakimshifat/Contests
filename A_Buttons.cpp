// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1858/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b) {
    cout << "First" << endl;
    return;
  } else if (a < b) {
    cout << "Second" << endl;
    return;
  } else if (a == b) {
    if (c % 2 == 0) {
      cout << "Second" << endl;
    } else {
      cout << "First" << endl;
    }
  }
}

int32_t main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
