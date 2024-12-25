#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve() {
    int n, m;
    cin >> n >> m;

    int count = 0, total_length = 0;
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        if (word.size() <= m) {
		m -= word.size();
            count++;
        } else {
		for(int j = i + 1; j < n; j++){
			cin >> word;
		}
		break;
        }
    }

    cout << count << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
