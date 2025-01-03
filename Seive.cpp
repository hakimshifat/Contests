#include <bits/stdc++.h>
using namespace std;
#define int long long int

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

  // Return list of prime numbers
  vector<int> primes;
  for (int i = 2; i <= n; i++) {
    if (prime[i]) {
      primes.push_back(i);
    }
  }
  return primes;
}

int32_t main() {
  auto x = sieve(100);

  for (int i = 1; i < x.size(); i++) {
    cout << i << ": " << x[i] << endl;
  }
}
