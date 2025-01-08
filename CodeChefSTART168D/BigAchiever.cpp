// time-limit: 1000
// problem-url: https://www.codechef.com/START168D/problems/BIG
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "
const int MOD = 1e9 + 7;

void solve() {
  int size;
  cin >> size;
  vector<int> vc(size);
  for (auto &x : vc)
    cin >> x;

  int current_max = vc[0];
  cout << 1 << sp;
  for (int i = 1; i < vc.size(); i++) {
    if (vc[i] > current_max) {
      current_max = vc[i];
    }
    if (vc[i] >= current_max) {
      cout << 1 << sp;
    } else {
      cout << 0 << sp;
    }
  }
  cout << endl;
}

int32_t main() {
  int test;
  cin >> test;
  while (test--) {
    solve();
  }
  return 0;
}
