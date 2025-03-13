// time-limit: 1000
// problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/B
#include <bits/stdc++.h>
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

/*

1 2 0 4 0 5 6
2 1 0 4 0 5 6
4 0 1 2 0 5 6

 * */

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr)

void rev_cus(int t, vector<int> &vc) { reverse(vc.begin(), vc.begin() + t); }
int32_t main() {
  int sz;
  cin >> sz;
  vector<int> vc(sz);
  int t = 0;
  for (auto &x : vc)
    cin >> x;

  for (int i = 0; i < vc.size(); i++) {
    if (vc[i] == 0) {
      rev_cus(i, vc);
    }
  }
  for (auto &x : vc)
    cout << x << " ";
}
