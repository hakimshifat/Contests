// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/520/A
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	for(int i = 0 ; i < s.size() ;i++){
		s[i] = tolower(s[i]);
	}
	int freq[26]{0};
	for(int i = 0 ;i  < s.size(); i++){
		freq[s[i] - 'a']++;
	}
	for(int i = 0; i < 26; i++){
		if(freq[i] == 0){
			cout << "NO";
			exit(0);
		}
	}
	cout << "YES";
	
}

int32_t main() {
  int test = 1;
  //	scanf("%d", &test);
  while (test--) {
    solve();
  }
  return 0;
}
