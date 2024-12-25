#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"


int32_t main() {

int n;cin >> n;

vector<int>vc(n);
for(auto &x : vc) cin >> x;
int temp = n;

int s = 0, p = 0;
int i = 0, j = n - 1;
bool turn = true;

while(temp--){
	if( turn == true ) {
		if( vc[i] > vc[j] ){
			s += vc[i];
			i++;
		}
		else{
			s += vc[j];
			j--;
		}

		turn = !turn;
	}
	else{
		if( vc[i] > vc[j] ){
			p += vc[i];
			i++;
		}
		else{
			p += vc[j];
			j--;
		}
		turn = !turn;

	}


}
 cout << s <<" "<<p;

}
