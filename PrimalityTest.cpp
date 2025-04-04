// time-limit: 1000
// problem-url: https://www.codechef.com/problems/PRB01
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

bool isprime(int n) {
  if (n <= 1)
    return false;
  if (n == 2)
    return true;
  if (n % 2 == 0)
    return false;
  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

void solve() {
  int n;
  cin >> n;
  if (isprime(n)) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }
}

int32_t main() {
  int test = 1;
  scanf("%lld", &test);
  while (test--) {
    solve();
  }
  return 0;
}
