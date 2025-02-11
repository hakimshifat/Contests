// time-limit: 1000
// problem-url: https://codeforces.com/contest/514/problem/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

int32_t main() {
  string s;
  cin >> s;
  if (s.size() == 1) {
    cout << s;
    return 0;
  }
  for (int i = 0; i < s.size(); i++) {
    if (i == 0) {
      if ((9 - (s[i] - '0')) == 0) {
        cout << s[i];
        continue;
      }
    }
    if (9 - (s[i] - '0') < (s[i] - '0')) {
      cout << 9 - (s[i] - '0');
    } else {
      cout << s[i];
    }
  }
}
