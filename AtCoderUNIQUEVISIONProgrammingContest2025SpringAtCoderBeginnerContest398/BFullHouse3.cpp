// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc398/tasks/abc398_b
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define endl '\n'
#define int long long int
#define pb push_back
#define all(x) x.begin(), x.end()
const int MOD = 1e9 + 7;
const int maxN = 1e5 + 5;

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

int32_t main() {
  unordered_map<int, int>(mp);
  int n = 7;
  while (n--) {
    int input;
    cin >> input;
    mp[input]++;
  }
  for (auto &x : mp) {
    if (x.second >= 3) {
      auto m = x;
      for (auto &x : mp) {
        if (x != m && x.second >= 2) {
          cout << "Yes";
          return 0;
        }
      }
    }
  }
  cout << "No";
}
