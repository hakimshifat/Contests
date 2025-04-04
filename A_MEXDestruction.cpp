// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/2049/A
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "
const int MOD = 1e9 + 7;

void solve() {
  int size;
  int count = 0;
  cin >> size;
  vector<int> vc(size);
  for (auto &x : vc)
    cin >> x;

  while (!vc.empty() && vc.back() == 0)
    vc.pop_back();

  reverse(vc.begin(), vc.end());

  while (!vc.empty() && vc.back() == 0)
    vc.pop_back();
  reverse(vc.begin(), vc.end());

  if (vc.empty()) {
    cout << 0 << endl;
    return;
  }

  bool hasZero = false;
  for (const auto x : vc)
    hasZero |= x == 0;

  if (hasZero) {
    cout << 2 << endl;
  } else {
    cout << 1 << endl;
  }
}

int32_t main() {
  int test = 1;
  scanf("%lld", &test);
  while (test--) {
    solve();
  }
  return 0;
}
