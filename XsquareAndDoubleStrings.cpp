// time-limit: 1000
// problem-url: https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/xsquare-and-double-strings-1/?purpose=login&source=problem-page&update=google
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "
void solve() {
int freq[27]{0};
	string s; cin >> s;
	for(int i = 0 ; i < s.size();i++){
		freq[s[i] - 'a']++;
	}
	for(int i = 0 ; i < 26;i++){
		if(freq[i] > 1){
			cout << "Yes" << endl;
			return;
		}
	}
	cout << "No" << endl;
	
}

int32_t main() {
  int test = 1;
 scanf("%d", &test);
  while (test--) {
    solve();
  }
  return 0;
}
