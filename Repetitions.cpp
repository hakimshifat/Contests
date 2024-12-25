// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1069
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "

int longestRepeat(string &str){
	int count = 1, temp = 1;
	for(int i = 0 ; i < str.size()-1; i++){
		char ch = str[i];
		if(str[i+1] == ch){
			temp++;
			count = max (count,temp);
		}
		else{
			temp = 1;
			count = max(count,temp);
		}
	}
	return count;

}



int32_t main() {
   // ios::sync_with_stdio(false);
  //  cin.tie(0);
  string s; cin >> s;
  cout << longestRepeat(s) << endl;
}
