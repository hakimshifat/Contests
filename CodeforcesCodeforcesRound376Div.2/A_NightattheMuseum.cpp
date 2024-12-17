// time-limit: 1000
// problem-url: https://codeforces.com/contest/731/problem/A
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "

void solve() {
	string str; cin >> str;
	int count = 0;

	char start = 'a';
	for(int i = 0 ; i < str.size(); i++){
		int temp = min((26- abs(start-str[i]),26- abs(str[i]-start) ), (abs(start-str[i]),abs(str[i]-start) ));
		count  += temp;
		start = str[i];
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
