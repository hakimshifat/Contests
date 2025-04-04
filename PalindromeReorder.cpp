// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1755
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
#define For(a, b) for (auto &a : b)
const int MOD = 1e9 + 7;
const int maxN = 1e6 + 5;

long long power(long long base, long long exp) {
  long long res = 1;
  base %= MOD;
  while (exp > 0) {
    if (exp % 2 == 1)
      res = (res * base) % MOD;
    base = (base * base) % MOD;
    exp /= 2;
  }
  return res;
}

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr)

string palindromeReorder(string &str) {
  map<char, int> fq;
  for (auto &x : str) {
    fq[x]++;
  }

  int oddC = 0;
  for (auto &x : fq) {
    if (x.second % 2 != 0) {
      oddC++;
    }
  }

  string ans(str.size(), ' ');

  if (oddC > 1) {
    return "NO SOLUTION";
  } else {
    char oddchar = '\0';
    int left = 0, right = str.size() - 1;
    for (auto &x : fq) {
      if (x.second % 2 != 0) {
        oddchar = x.first;
        x.second--;
      }
      if (oddchar != '\0') {
        ans[str.size() / 2] = oddchar;
      }
      while (x.second > 1) {
        ans[left++] = ans[right--] = x.first;
        x.second -= 2;
      }
    }
  }
  return ans;
}

int32_t main() {
  string str;
  cin >> str;
  cout << palindromeReorder(str) << endl;
}
