// time-limit: 1000
// problem-url: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F
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

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr)

int32_t main() {
  int sz;
  cin >> sz;
  vector<int> vc(sz);
  for (auto &x : vc)
    cin >> x;
  for (int i = 0, j = vc.size() - 1; i < sz / 2; i++, j--) {
    cout << vc[i] << " ";
    cout << vc[j] << " ";
  }
  if (sz & 1)
    cout << vc[sz / 2];
}
