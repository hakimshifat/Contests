// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/2047/B
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	vector<int>freq(26);
	for(int i = 0 ;i < n; i++){
		freq[s[i] - 'a'] += 1;
	}
	pair< pair<int,char>,int>low,high;
	low = high = { { freq[s[0] - 'a'], s[0] }, 0 };
	for(int i = 1; i < n; i++){
		low = min (low, { { freq[s[i] - 'a'], s[i] }, i  });
		high = max (high, { { freq[s[i] - 'a'], s[i] }, i  });
	}
	s[low.second] = s[high.second];
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
