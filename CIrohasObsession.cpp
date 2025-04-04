// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc042/tasks/arc058_a
#include <bits/stdc++.h>
using namespace std;
#define rep(i, z, n) for (int i = z; i < (n); i++)

bool isvalid(int num, unordered_set<int> &vc) {
  while (num > 0) {
    if (vc.count(num % 10))
      return false;
    num /= 10;
  }
  return true;
}

int main() {
  int n, k;
  cin >> n >> k;

  unordered_set<int> forbidden(k);
  rep(i, 0, k) {
    int n;
    cin >> n;
    forbidden.insert(n);
  }

  while (isvalid(n, forbidden) == false) {
    n++;
  }
  cout << n << endl;
}
