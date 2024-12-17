// time-limit: 1000
// problem-url: https://codeforces.com/contest/431/problem/A
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "

void solve() {
	int arr[4];
	for(int i = 0 ; i < 4 ;i++){
		cin >> arr[i];
	}
	string b;
	cin.ignore();
	getline(cin , b);

	int count = 0;
	for(int i = 0 ; i < b.length();i++){
		count += arr[ (b[i] - 1)-'0'];
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
