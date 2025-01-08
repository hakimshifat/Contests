#include <bits/stdc++.h>
using namespace std;

void solve() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    string A, B;
    cin >> A >> B;

    int count_ones = 0;
    for (int i = 0; i < N; i++) {
      if (A[i] == '1')
        count_ones++;
      else if (B[i] == '1')
        count_ones++;
    }

    if (count_ones % 2) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}

int main() {
  solve();
  return 0;
}
