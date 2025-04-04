// time-limit: 2000
// problem-url: https://codeforces.com/contest/228/problem/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

int32_t main() {
  set<int> a;
  int input;
  while (cin >> input) {
    a.insert(input);
  }
  if (a.size() == 4) {
    cout << 0;
  } else if (a.size() == 3) {
    cout << 1;
  } else if (a.size() == 2) {
    cout << 2;
  } else if (a.size() == 1) {
    cout << 3;
  }
}
