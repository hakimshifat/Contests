// time-limit: 1240
// problem-url: https://www.spoj.com/problems/TDKPRIME/
#include <bits/stdc++.h>
#include <climits>
using namespace std;
#define int long long int
#define endl "\n"
#define sp " "
const int MOD = 9e7;
vector<int> primes;
void sieve(int n) {
  vector<bool> prime(n + 1, 1); // Assume all numbers are prime
  prime[0] = 0;                 // 0 is not prime
  prime[1] = 0;                 // 1 is not prime

  for (int i = 2; i * i <= n; i++) {
    if (prime[i]) { // If i is prime
      for (int j = i * i; j <= n; j += i) {
        prime[j] = 0; // Mark all multiples of i as not prime
      }
    }
  }

  // Return list of prime numbers
  for (int i = 2; i <= n; i++) {
    if (prime[i]) {
      primes.push_back(i);
    }
  }
}

void solve() {
  int n;
  cin >> n;
  cout << primes[n - 1] << endl;
}

int32_t main() {
  sieve(MOD);
  int test = 1;
  scanf("%lld", &test);
  while (test--) {
    solve();
  }
  return 0;
}
