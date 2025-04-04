// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1900/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
  int size;
  cin >> size;
  string str;
  cin >> str;

  int cnt = 0;
  if (str.find("...") != string::npos) {
    cout << 2 << endl;
    return;
  } else {
    for (int i = 0; i < str.size(); i++) {
      if (str[i] == '.') {
        cnt++;
      }
    }
    cout << cnt << endl;
    return;
  }
}

int32_t main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
