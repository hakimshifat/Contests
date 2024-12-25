// time-limit: 1000
// problem-url: https://codeforces.com/contest/427/problem/A
//chatgpt helped in input receive if and else if statement
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

void solve() {
    int officer = 0;
    int count = 0;  
    int input = 0;

    int n = 0;
    cin >> n; 
    while (n--) {
        cin >> input;
        if (input > 0) {
            officer += input;
        } 
        else if (input == -1) {
            if (officer > 0) {
                officer--;
            } else {
                count++;
            }
        }
    }
    cout << count << endl;
}

int32_t main() {
    int test = 1;
    while (test--) {
        solve();
    }
    return 0;
}
