// time-limit: 1000
// problem-url:
// https://judge.eluminatis-of-lu.com/contest/67b0eb1a3cf8d60008d0f2a2/1132
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
  int a;
  cin >> a;
  int point;
  point += (a / 500) * 1000;
  int b = (a % 500);
  if (b % 5 == 0) {
    point += b;
  } else {
    point += b - (b % 5);
  }
  cout << point << endl;
}

int32_t main() {
  int test = 1;
  while (test--) {
    solve();
  }
}
