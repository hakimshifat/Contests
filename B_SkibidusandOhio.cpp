#include <iostream>
#include <string>
using namespace std;

void solve() {
  string s;
  cin >> s;

  bool hasAdjacentEqual = false;
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] == s[i + 1]) {
      hasAdjacentEqual = true;
      break;
    }
  }

  if (hasAdjacentEqual)
    cout << 1 << "\n";
  else
    cout << s.size() << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}

