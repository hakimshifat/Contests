// time-limit: 2000
// problem-url: https://codeforces.com/contest/231/problem/A
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
void abd()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve() {
	int n; cin >> n;
	int a, b, c;
	int count =0;
	while(n--){
		cin >> a >> b >> c;
		if(a == 1 && b == 1 || a == 1 && c == 1 || b == 1 && c == 1){
			count++;
		}
	}
	cout << count;
	
}

int32_t main() {
	abd();
  int test = 1;
  //	scanf("%d", &test);
  while (test--) {
    solve();
  }
  return 0;
}
