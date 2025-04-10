// time-limit: 2000
// problem-url: https://atcoder.jp/contests/agc010/tasks/agc010_a
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

int32_t main() {
  int n;
  cin >> n;
  int o = 0, e = 0;
  while (n--) {
    int a;
    cin >> a;
    if (a & 1) {
      o++;
    } else {
      e++;
    }
  }
  if (o % 2 == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO";
  }
}
