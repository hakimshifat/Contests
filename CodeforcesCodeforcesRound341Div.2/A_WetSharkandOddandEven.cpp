// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/621/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    vector<int> vc(n);
    int sum = 0;
    vector<int> oddNumbers;

    for (auto &x : vc) {
        cin >> x;
        sum += x;
        if (x % 2 != 0) oddNumbers.push_back(x);
    }

    if (sum % 2 != 0) {
            int smallestOdd = *min_element(oddNumbers.begin(), oddNumbers.end());
            sum -= smallestOdd;
    }

    cout << sum << endl;
}

int32_t main() {
    solve();
    return 0;
}
