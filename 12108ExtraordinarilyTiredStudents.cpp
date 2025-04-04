// time-limit: 3000
// problem-url:
// https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=3260
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
/*
 Thoughts
 a = awake
 b = sleep
 c = initial condition

 */

int solve(int a, int b, int c) {
  // code
  //
}

int realsolve(int a, int b, int c) {}

int32_t main() {
  int n, a, b, c;
  int num = 1;

  while (cin >> n && n != 0) {
    cin >> a >> b >> c;
  }
  int result = realsolve(a, b, c);
  cout << "Case " << num++ << ": " << result << "\n";
}
