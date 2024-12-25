#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

#define fastIO                                                                 \
    ios::sync_with_stdio(false);                                               \
    cin.tie(NULL);                                                             \
    cout.tie(NULL);                                                            \
    cout.precision(numeric_limits<double>::max_digits10);

const int MOD = 1e9 + 7;
const int BASE = 257;
const int N = 1e5+10;
int freq[1000000009]{0};

void solve(){
}

int32_t main() {
	int input;
	int size; cin >> size;
	for(int i = 0 ; i < size; i++){
		cin >> input;
		freq[input]++;
	}
	for(int i = 0 ; i < size;i++){
		cin >> input;
		cout << freq[input] << endl;
	}
}

