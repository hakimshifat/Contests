// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1896/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
  int size;
  cin >> size;
  vector<int> vc(size);
  for (auto &x : vc) {
    cin >> x;
  }
  int temp = size;
  while (temp--) {
    for (int i = 1; i < size - 1; i++) {
      if (vc[i] > vc[i - 1] && vc[i] > vc[i + 1]) {
        swap(vc[i], vc[i + 1]);
      }
    }
    if (is_sorted(vc.begin(), vc.end()))
      break;
  }
  is_sorted(vc.begin(), vc.end()) ? cout << "YES\n" : cout << "NO\n";
}

int32_t main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
