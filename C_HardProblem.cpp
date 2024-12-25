// time-limit: 1000
// problem-url: https://codeforces.com/contest/2044/problem/C
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "


void solve() {
	int m, a, b, c;
	cin >> m >> a >> b >> c;
	int ans = 0, rem = 0;

	ans += min(m,a); rem += m - min(m,a);
	ans += min(m,b); rem += m - min(m,b);
	ans += min(rem,c);
	cout << ans << endl;
 }

int32_t main() {
  int test = 1;
  	scanf("%d", &test);
  while (test--) {
    solve();
  }
  return 0;
}
