// time-limit: 1000
// problem-url:
// https://judge.eluminatis-of-lu.com/contest/67b0eb1a3cf8d60008d0f2a2/1108
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a + b > c && a + c > b && b + c > a) {
    if (a == b && b == c) {
      cout << "Equilateral" << endl;
      return;
    } else if (a == b || b == c || a == c) {
      cout << "Isosceles" << endl;
    } else {
      cout << "Scalene" << endl;
    }
  } else {
    cout << "Not a triangle" << endl;
  }
}

int32_t main() {
  int test = 1;
  while (test--) {
    solve();
  }
}
