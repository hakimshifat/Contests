// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1866/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);

  for (auto &x : arr) {
    cin >> x;
  }
  for (auto &x : arr) {
    if (x < 0) {
      x = (-1) * x;
    }
  }
  cout << *min_element(arr.begin(), arr.end());
}

int32_t main() { solve(); }
