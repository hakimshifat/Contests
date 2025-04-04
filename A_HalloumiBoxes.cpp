// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1903/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
  int size, maxRev;
  cin >> size >> maxRev;
  vector<int> arr(size);
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  if (is_sorted(arr.begin(), arr.end())) {
    cout << "YES" << endl;
    return;
  }
  if (maxRev > 1) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int32_t main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
