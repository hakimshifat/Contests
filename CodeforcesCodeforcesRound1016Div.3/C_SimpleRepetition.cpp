#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;

const int witnesses[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};

ull mod_mul(ull a, ull b, ull mod) {
  ull result = 0;
  a %= mod;
  while (b) {
    if (b & 1)
      result = (result + a) % mod;
    a = (2 * a) % mod;
    b >>= 1;
  }
  return result;
}

ull mod_pow(ull base, ull exp, ull mod) {
  ull result = 1;
  base %= mod;
  while (exp) {
    if (exp & 1)
      result = mod_mul(result, base, mod);
    base = mod_mul(base, base, mod);
    exp >>= 1;
  }
  return result;
}

bool miller_rabin(ull n) {
  if (n < 2)
    return false;
  for (int p : witnesses) {
    if (n % p == 0)
      return n == p;
  }
  ull d = n - 1;
  int r = 0;
  while ((d & 1) == 0) {
    d >>= 1;
    r++;
  }
  for (int a : witnesses) {
    ull x = mod_pow(a, d, n);
    if (x == 1 || x == n - 1)
      continue;
    bool cont = false;
    for (int i = 1; i < r; i++) {
      x = mod_mul(x, x, n);
      if (x == n - 1) {
        cont = true;
        break;
      }
    }
    if (!cont)
      return false;
  }
  return true;
}

ull str_to_ull(const string &s) {
  ull res = 0;
  for (char c : s) {
    res = res * 10 + (c - '0');
  }
  return res;
}

void solve() {
  string x;
  int k;
  cin >> x >> k;

  string y;
  for (int i = 0; i < k; i++)
    y += x;

  if (y.size() > 18) {
    cout << "NO\n";
    return;
  }

  ull num = str_to_ull(y);
  cout << (miller_rabin(num) ? "YES" : "NO") << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
    solve();
}
