#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (n % 2 == 1) {
    int half = (n - 1) / 2;
    cout << string(half, '-') << '=' << string(half, '-');
  } else {
    int half = n / 2;
    int before = half - 1;
    cout << string(before, '-') << "==" << string(before, '-');
  }
}
