// time-limit: 1000
// problem-url: https://codeforces.com/contest/344/problem/A
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "

void solve() {
	int n; cin >> n;
	int temp = n;
	char a, b , c ,d;
	int count = 0;
	while(temp--){
		if(temp == n-1){
		cin >> a >> b;
		count++;
		}
		else{
			cin >> c >> d;
			if( b != c ) {
			}
			else{
			count++;	
			}
			a = c;
			b = d;
		}
	}
	cout << count ;
}

int32_t main() {
  int test = 1;
  //	scanf("%d", &test);
  while (test--) {
    solve();
  }
  return 0;
}
