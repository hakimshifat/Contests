// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1890/A
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "
const int MOD = 1e9 + 7;

void solve() {
  int size;
  cin >> size;
  map<int, int> occ;
  for (int i = 1; i <= size; i++) {
    int x;
    cin >> x;
    occ[x]++;
  }

  if (occ.size() >= 3) {
    cout << "No" << endl;
    return;
  } else {
    if (abs(occ.begin()->second - occ.rbegin()->second) <= 1) {
      cout << "Yes" << endl;
      return;
    } else {
      cout << "No" << endl;
    }
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
