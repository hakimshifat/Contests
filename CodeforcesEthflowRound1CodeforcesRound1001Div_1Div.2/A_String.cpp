// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/2062/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve() {
	int count = 0;
	string s; cin >> s;
	for(int i = 0 ;i < s.size(); i++){
		if( s[i] == '1' ){
			count++;
		}
	}
	cout << count << endl;
}

int32_t main() {
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
