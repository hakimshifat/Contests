// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/282/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

int32_t main() {
  int x;
  cin >> x;
  int num = 0;
  string s;
  for (int i = 0; i < x; i++) {
    cin.ignore();
    getline(cin, s);
    for (int j = 0; j < s.size(); j++) {
      if (s[j] == '+') {
        num++;
        break;
      } else if (s[j] == '-') {
        num--;
        break;
      }
    }
  }
  cout << num;
}
