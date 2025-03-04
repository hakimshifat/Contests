// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc042/tasks/abc042_b
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

int32_t main() {
  int n, size;
  cin >> n >> size;
  vector<string> vc;
  while (n--) {
    string s;
    cin >> s;
    vc.push_back(s);
  }
  sort(vc.begin(), vc.end());
  for (auto x : vc) {
    cout << x;
  }
}
