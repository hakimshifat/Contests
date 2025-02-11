#include <bits/stdc++.h>
using namespace std;

int problemIndex(vector<long long> &vc) {
  for (int i = 0; i < vc.size() - 1; i++) {
    if (vc[i + 1] < vc[i]) {
      return i;
    }
  }
  return -1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    long long B;
    cin >> B;

    int idx = problemIndex(a);
    if (((a[idx] - B) < a[idx + 1]) && a[idx] - B > a[idx - 1]) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
