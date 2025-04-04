// time-limit: 1000
// problem-url: https://codeforces.com/contest/2092/problem/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
#define For(a, b) for (auto &a : b)
const int MOD = 1e9 + 7;
const int maxN = 1e6 + 5;
#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr)

bool possible(const string &a, const string &b, int ab, int idx) {
  if (idx < 0) {
    return true; // Successfully checked all positions
  }

  if (ab == 1) { // We're checking string b
    if (b[idx - 1] == '0') {
      return true;
    } else {
      return possible(a, b, 0, idx - 1);
    }
  } else { // We're checking string a
    if (a[idx - 1] == '0') {
      return true;
    } else {
      return possible(a, b, 1, idx - 1);
    }
  }
}

void solve() {
  int n;
  cin >> n;
  string a, b;
  cin >> a >> b;

  bool allZeros = true;
  for (char c : a) {
    if (c == '1') {
      allZeros = false;
      break;
    }
  }

  if (allZeros) {
    cout << "YES" << endl;
    return;
  }

  vector<bool> cor;

  for (int i = 0; i < a.size(); i++) {
    if (a[i] == '1') {
      cor.push_back(false);
      if (possible(a, b, 1, i)) {
        cor.back() = true;
      }
    }
  }

  bool allPossible = true;
  for (bool c : cor) {
    if (!c) {
      allPossible = false;
      break;
    }
  }

  if (allPossible) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int32_t main() {
  fastio;
  int test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
}
