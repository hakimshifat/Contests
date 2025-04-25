// time-limit: 3000
// problem-url:
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=3&page=show_problem&problem=36
#include <bits/stdc++.h>
#include <vector>
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

int work(int n) {
  int cnt = 0;
  while (n != 1) {
    if (n & 1) {
      n = (n * 3) + 1;
      cnt++;
    } else {
      n = n / 2;
      cnt++;
    }
  }
  return cnt + 1;
}

int32_t main() {
  int i, j;
  while (cin >> i >> j) {
    cout << i << " " << j << " ";
    if (j < i)
      swap(i, j);
    int maxi = 0;
    for (int k = i; k <= j; k++) {
      maxi = max(maxi, work(k));
    }
    cout << maxi << endl;
  }
}
