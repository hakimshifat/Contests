// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1070
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "
unordered_set<int> solution;

int32_t main() {
  int n;
  cin >> n;
  if (n == 1) {
    cout << 1;
  } else if (n >= 2 && n <= 3) {
    cout << "NO SOLUTION";
  } else if (n == 4) {
    cout << "2 4 1 3";
  } else {
    vector<int> vc;
    for (int i = 0; i < n; i++) {
      vc.push_back(i + 1);
    }
    solution.insert(vc[0]);
    int start = vc[0];
    for (int i = 1; i < vc.size(); i++) {
      if (((start - vc[i] > 1)) || ((vc[i] - start) > 1)) {
        solution.insert(vc[i]);
        start = vc[i];
      }
    }
    start = vc[vc.size() - 1];
    for (int i = 1; i < vc.size(); i++) {
      if (((start - vc[i] > 1)) || ((vc[i] - start) > 1)) {
        solution.insert(vc[i]);
        start = vc[i];
      }
    }
    for (auto a : solution) {
      cout << a << " ";
    }
  }
  return 0;
}
