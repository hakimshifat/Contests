// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc043/tasks/arc059_a
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

int32_t main() {
  int size;
  cin >> size;
  int maxi = 0;
  while (size--) {
    int n;
    cin >> n;
    maxi = max(maxi, n);
  }
  cout << maxi;
}
