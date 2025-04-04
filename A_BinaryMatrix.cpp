#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> matrix(n, vector<int>(m));
    
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < m; j++) {
            matrix[i][j] = row[j] - '0';
        }
    }
    
    vector<int> rowXOR(n, 0), colXOR(m, 0);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rowXOR[i] ^= matrix[i][j];
            colXOR[j] ^= matrix[i][j];
        }
    }
    
    int rowChanges = count(rowXOR.begin(), rowXOR.end(), 1);
    int colChanges = count(colXOR.begin(), colXOR.end(), 1);
    
    cout << max(rowChanges, colChanges) << endl;
}

int32_t main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

