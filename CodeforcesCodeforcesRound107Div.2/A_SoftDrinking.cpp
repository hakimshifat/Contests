// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/151/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

int32_t main() {
  int a, b, c, d, e, f, g, h;
  cin >> a >> b >> c >> d >> e >> f >> g >> h;
  cout << min(((b * c) / g), min(d * e, f / h)) / a;
}
