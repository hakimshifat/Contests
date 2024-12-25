// time-limit: 1000
// problem-url: https://codeforces.com/contest/2044/problem/B
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "

void solve() {
string s; cin >> s;
for(int i = 0; i < s.size(); i++){
	if(s[i] == 'p'){
		s[i] = 'q';
	}
	else if(s[i] == 'q'){
		s[i] = 'p';
	}
}
reverse(s.begin(),s.end());
cout << s << endl;
}

int32_t main() {
  int test = 1;
  	scanf("%d", &test);
  while (test--) {
    solve();
  }
  return 0;
}
