// time-limit: 1000
// problem-url: https://codeforces.com/contest/2091/problem/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
#define For(a, b) for (auto &a : b)
const int MOD = 1e9 + 7;
const int maxN = 1e6 + 5;

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr)
/*

 the date is 01.03.2025
 so taking freq array
 and counting the input
 until find
 0 = 3
 1 = 1
 2 = 2
 3 = 1
 5 = 1

 for somw reason,
 i+1 worked

 */

void solve() {
  int sz;
  cin >> sz;
  int input;
  int ans = 0;
  int arr[10]{0};
  for (int i = 0; i < sz; i++) {
    cin >> input;
    arr[input]++;
    if (arr[0] >= 3 and arr[1] >= 1 and arr[2] >= 2 and arr[3] >= 1 and
        arr[5] >= 1 and ans == 0) {
      ans = i + 1;
    }
  }
  cout << ans << endl;
}

int32_t main() {
  fastio;
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
