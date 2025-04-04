// time-limit: 2000
// problem-url: https://codeforces.com/contest/265/problem/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

int32_t main() {
  string a, b;
  cin >> a >> b;
  int pos = 0;

  for (int i = 0; i < b.size(); i++) {
    if (a[pos] == b[i]) {
      pos++;
    } else {
      continue;
    }
  }
  cout << pos + 1;
}
