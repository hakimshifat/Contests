// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/2039/B
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
  string str;
  cin >> str;
  if (str.size() == 1) {
    cout << -1 << endl;
    return;
  }
  if (str.size() % 2 == 0) {
    cout << str << endl;
  } else {
    for (int i = 0; i < str.size() - 2; i++) {
      cout << str[i];
    }
    cout << endl;
  }
}

int32_t main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
