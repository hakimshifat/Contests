// time-limit: 6000
// problem-url: https://www.spoj.com/problems/PRIME1/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "
const int MOD = 1e9 + 7;

vector<int> sieve(int n) {
  vector<int> prime(n + 1, 1); // Assume all numbers are prime
  prime[0] = 0;                // 0 is not prime
  prime[1] = 0;                // 1 is not prime

  for (int i = 2; i * i <= n; i++) {
    if (prime[i]) { // If i is prime
      for (int j = i * i; j <= n; j += i) {
        prime[j] = 0; // Mark all multiples of i as not prime
      }
    }
  }
  return prime;
}

void solve() {
  int a, b;
  cin >> a >> b;
  auto primes = sieve(b);
  for (int i = a; i <= b; i++) {
    if (primes[i] == 1) {
      cout << i << endl;
    }
  }
  cout << endl;
}

int32_t main() {
  int test = 1;
  scanf("%lld", &test);
  while (test--) {
    solve();
  }
  return 0;
}
