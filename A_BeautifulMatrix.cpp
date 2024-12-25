// time-limit: 2000
// problem-url: https://codeforces.com/contest/263/problem/A
#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long int
#define endl "\n"
void abd() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}

void solve() {
  int arr[5][5];
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (arr[i][j] == 1) {
        cout << abs(2 - i) + abs(2 - j);
        break;
      }
    }
  }
}

int32_t main() {
  int test = 1;
  //	scanf("%d", &test);
  while (test--) {
    solve();
  }
  return 0;
}
