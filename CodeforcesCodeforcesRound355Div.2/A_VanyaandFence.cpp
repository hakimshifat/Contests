// time-limit: 1000
// problem-url: https://codeforces.com/contest/677/problem/A
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
	abd();
	int frineds, fences;
	int count = 0;
	cin >> frineds >> fences;
	while(frineds--){
		int n; cin >> n;
		if(n > fences){
			count +=2;
		}
		else count++;
	}
	cout << count;
	
}

int32_t main() {
  int test = 1;
  //	scanf("%d", &test);
  while (test--) {
    solve();
  }
  return 0;
}
