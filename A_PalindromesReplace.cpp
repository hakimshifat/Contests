// time-limit: 1000
// problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/A
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "
const int MOD = 1e9 + 7;

void makePalindrome(string &str) {
  int n = str.size();
  int i = 0, j = n - 1;

  while (i <= j) {
    if (str[i] == '?' && str[j] == '?') {
      str[i] = str[j] = 'a';
    } else if (str[i] == '?') {
      str[i] = str[j];
    } else if (str[j] == '?') {
      str[j] = str[i];
    } else if (str[i] != str[j]) {
      cout << -1 << endl;
      return;
    }
    i++;
    j--;
  }

  cout << str << endl;
}

bool ispalindrome(string &str) {
  auto str1 = str;
  reverse(str.begin(), str.end());
  if (str == str1) {
    return true;
  }
  return false;
}

void solve() {
  string str;
  cin >> str;
  if (ispalindrome(str)) {
    cout << str << endl;
  } else {
    makePalindrome(str);
  }
}

int32_t main() {
  int test = 1;
  //	scanf("%lld", &test);
  while (test--) {
    solve();
  }
  return 0;
}
