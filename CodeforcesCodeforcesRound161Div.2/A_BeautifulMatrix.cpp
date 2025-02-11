// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/263/A
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

int32_t main() {
  int arr[5][5];
  int l = 0, r = 0;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (arr[i][j] == 1) {
        l = i;
        r = j;
      }
    }
  }
  cout << abs(2 - l) + abs(2 - r);
}
