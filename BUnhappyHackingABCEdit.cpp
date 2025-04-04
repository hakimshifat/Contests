// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc043/tasks/abc043_b
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int32_t main() {
  string s;
  cin >> s;

  string a;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '0') {
      a.push_back('0');
    } else if (s[i] == 'B' && a.size() == 0) {
      continue;
    } else if (s[i] == '1') {
      a.push_back('1');
    } else if (s[i] == 'B') {
      a.pop_back();
    }
  }
  cout << a;
}
