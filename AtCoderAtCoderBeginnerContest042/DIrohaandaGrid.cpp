// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc042/tasks/arc058_b

#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;

// Fast binary exponentiation modulo mod
ll modPow(ll a, ll b, ll mod) {
  ll res = 1;
  while (b > 0) {
    if (b & 1)
      res = (res * a) % mod;
    a = (a * a) % mod;
    b >>= 1;
  }
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int H, W, A, B;
  cin >> H >> W >> A >> B;

  // Precompute factorials and inverse factorials up to (H+W)
  int maxVal =
      H + W; // This is a safe upper bound for our combination computations.
  vector<ll> fact(maxVal + 1), invFact(maxVal + 1);
  fact[0] = 1;
  for (int i = 1; i <= maxVal; i++) {
    fact[i] = (fact[i - 1] * i) % MOD;
  }
  invFact[maxVal] =
      modPow(fact[maxVal], MOD - 2, MOD); // Fermat's little theorem
  for (int i = maxVal; i > 0; i--) {
    invFact[i - 1] = (invFact[i] * i) % MOD;
  }

  // Lambda function to compute binomial coefficients mod MOD
  auto comb = [&](int n, int r) -> ll {
    if (r < 0 || r > n)
      return 0;
    return ((fact[n] * invFact[r]) % MOD * invFact[n - r]) % MOD;
  };

  ll ans = 0;
  // i represents the column index of the "border" where we pass from row H-A-1
  // to row H-A. We sum for i from B to W-1.
  for (int i = B; i < W; i++) {
    // Number of ways to go from (0, 0) to (H-A-1, i):
    // Moves: (H-A-1) downs and i rights, total moves = (H-A-1 + i)
    ll ways1 = comb((H - A - 1) + i, i);

    // Number of ways to go from (H-A, i) to (H-1, W-1):
    // Moves: (A-1) downs (from H-A to H-1) and (W-i-1) rights (from i to W-1)
    ll ways2 = comb((W - i - 1) + (A - 1), (A - 1));

    ans = (ans + ways1 * ways2) % MOD;
  }

  cout << ans << "\n";
  return 0;
}
