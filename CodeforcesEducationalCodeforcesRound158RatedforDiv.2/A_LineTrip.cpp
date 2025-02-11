// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1901/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
  int gasStation, distance;
  cin >> gasStation >> distance;
  vector<int> stations(gasStation);
  for (auto &x : stations) {
    cin >> x;
  }
  if (stations.size() == 1) {
    cout << stations[0] << endl;
    return;
  }
  cout << 2 * abs(stations[stations.size() - 1] - distance) << endl;
}

int32_t main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
