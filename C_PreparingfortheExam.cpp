// time-limit: 1500
// problem-url: https://codeforces.com/contest/2051/problem/C
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "


void solve() {
	int questions, listofQuestions, canAns;
cin >> questions >> listofQuestions >> canAns;
vector<int>listofQuestions_vc(listofQuestions);
vector<int>canAns_vc(canAns);
for(auto &x : listofQuestions_vc) cin >> x;
for(auto &x : canAns_vc) cin >> x;
string str;

for(int i = 0 ; i < listofQuestions_vc.size(); i++){
for(int m = 0 ; m < canAns_vc.size(); m++){
	if(canAns_vc[i] == listofQuestions_vc[m]){
		str.push_back(1);
	}
	else{
		str.push_back(0);
	}
}
}
cout << str << endl;

}

int32_t main() {
   // ios::sync_with_stdio(false);
  //  cin.tie(0);
  int test = 1;
  	scanf("%lld", &test);
  while (test--) {
    solve();
  }
  return 0;
}
