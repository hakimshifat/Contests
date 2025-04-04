// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1859/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

bool isallSame(vector<int> &vc) {
  for (int i = 0; i < vc.size() - 1; i++) {
    if (vc[i] != vc[i + 1]) {
      return false;
    }
  }
  return true;
}

void solve() {
  int size;
  cin >> size;
  vector<int> vc;
  vector<int> ans1;
  vector<int> ans2;

  for (int i = 0; i < size; i++) {
    int x;
    cin >> x;
    vc.push_back(x);
  }
  if (isallSame(vc)) {
    cout << -1 << endl;
    return;
  }
  int maxE = *max_element(vc.begin(), vc.end());
  for (int i = 0; i < vc.size(); i++) {
    if (vc[i] == maxE) {
      ans2.push_back(vc[i]);
    } else {
      ans1.push_back(vc[i]);
    }
  }

  cout << ans1.size() << " " << ans2.size() << endl;
  for (auto &x : ans1) {
    cout << x << " ";
  }
  cout << endl;
  for (auto &x : ans2) {
    cout << x << " ";
  }
  cout << endl;
}

int32_t main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
