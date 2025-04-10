// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1618
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
const int MOD = 1e9 + 7;
const int maxN = 1e6 + 5;

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr)

/*



*/

int countZero(int n) {
  int count = 0;
  for (int i = 5; n >= i; i *= 5) {
    count += n / i;
  }
  return count;
}

void solve() {
  int n;
  cin >> n;
  cout << countZero(n);
}

int32_t main() {
  fastio;
  int test = 1;
  while (test--) {
    solve();
  }
}
