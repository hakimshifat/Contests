#include <bits/stdc++.h>
using namespace std;

bool isUniversal(const string &s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s < rev;
}

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if (n == 1) {
        cout << "NO\n";
        return;
    }

    if (isUniversal(s)) {
        cout << "YES\n";
        return;
    }

    if (k == 0) {
        cout << "NO\n";
        return;
    }

    bool allSame = true;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[0]) {
            allSame = false;
            break;
        }
    }

    if (allSame) {
        cout << "NO\n";     } else {
        cout << "YES\n";     }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
