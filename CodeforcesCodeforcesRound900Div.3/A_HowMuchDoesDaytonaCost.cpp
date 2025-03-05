// problem-url: https://codeforces.com/problemset/problem/1878/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
  int n, k;
  cin >> n >> k; // n is the array size, k is the number to check for

  bool found = false;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    if (num == k) {
      found = true;
    }
  }

  cout << (found ? "YES" : "NO") << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }

  return 0;
}
