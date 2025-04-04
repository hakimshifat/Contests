// time-limit: 1000
// problem-url:
// https://judge.eluminatis-of-lu.com/contest/67b0eb1a3cf8d60008d0f2a2/1159
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  if (k == 0) {
    int num = 0;
    int maxx = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '1') {
        num++;
        maxx = max(maxx, num);
      }
      if (s[i] == '0') {
        num = 0;
      }
    }
    cout << maxx << endl;
    return;
  }
  //closed k'th sum
  //im thinking of taking closed sum
  //then printing them according to k
}

int32_t main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
