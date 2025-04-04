// time-limit: 1000
// problem-url: https://codeforces.com/contest/2071/problem/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
  int n;
  cin >> n;
  if (n == 1) {
    cout << "YES" << endl;
    return;
  }
  if (n % 4 == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

void solve1() {
  int n;
  cin >> n;
  if (n % 3 == 1) {
    cout << "YES" << endl;
    return;
  }
  cout << "NO" << endl;
}
int32_t main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
