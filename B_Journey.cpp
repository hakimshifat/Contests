// time-limit: 1000
// problem-url: https://codeforces.com/contest/2051/problem/B
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "

void solve() {
    int n;
    cin >> n;
    int arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    int sum_arr = arr[0] + arr[1] + arr[2];
    int day = (n / sum_arr) * 3; // Full cycles
    n %= sum_arr;

    for (int i = 0; n > 0; i++, day++) {
        n -= arr[i % 3];
    }

    cout << day << endl;
}

int32_t main() {
  int test = 1;
 	scanf("%d", &test);
  while (test--) {
    solve();
  }
  return 0;
}
