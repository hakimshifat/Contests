// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1899/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
  int it;
  cin >> it;

  if (it % 3) {
    cout << "First" << endl;
  } else {
    cout << "Second" << endl;
  }
}

int32_t main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
