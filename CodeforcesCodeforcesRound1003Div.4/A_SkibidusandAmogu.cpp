// time-limit: 1000
// problem-url: https://codeforces.com/contest/2065/problem/0
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
  string s;
  cin >> s;
  auto pos = s.rfind("us"); // Find last occurrence of "us"

  if (pos != string::npos) { // string us is found
    s.replace(pos, 2, "i");  // Replace "us" with "i"
  }
  cout << s << endl;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int test;
  cin >> test;
  while (test--) {
    solve();
  }
}
