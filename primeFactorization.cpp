#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "
const int MOD = 1e9 + 7;

void primeFactorizaiton(int n){
	for(int i = 2 ; i * i <= n ;i++){
		if( n % i ==0){
			int cnt = 0;
			while(n%i==0){
				cnt++;
				n/=i;
			}
			cout << i <<"^"<<cnt<<", ";
		}
	}
	if(n>1) cout << n <<"^1 " << endl;
	else cout << endl;
}


int32_t main() {
	primeFactorizaiton(24);
}

