// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1877/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
  int n;
  cin >> n;
  n--;
  int in;
  int count = 0;
  while (n--) {
    cin >> in;
    count += in;
  }
  cout << count * (-1) << endl;
}

int32_t main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
