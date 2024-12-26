// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1071
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "

int numberSpiral(int a, int b) {
  if (a > b) {
    int ans = (a - 1) * (a - 1);
    int add = 0;
    if (a % 2 == 0) {
      add = b;
    } else {
      add = 2 * a - b;
    }
    return ans + add;
  } else {
    int ans = (b - 1) * (b - 1);
    int add = 0;
    if (b % 2 == 0) {
      add = 2 * b - a;
    } else {
      add = a;
    }
    return ans + add;
  }
}

void solve() {
  int a, b;
  cin >> b >> a;
  cout << numberSpiral(a, b) << endl;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int test = 1;
  scanf("%lld", &test);
  while (test--) {
    solve();
  }
  return 0;
}
