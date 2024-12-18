// time-limit: 1000
// problem-url: https://codeforces.com/contest/268/problem/A
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "

void solve() {
	int n; cin >> n;
	int count = 0;
	vector<int>a(n);
	vector<int>b(n);
	for(int i = 0 ;i < n; i++){
		cin >> a[i] >> b[i];
	}

	for(int i = 0 ; i < a.size();i++){
		for(int j = 0 ; j < b.size(); j++){
			if(a[i] == b[j]){
				count++;
			}
		}
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
