#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr);

void solve() {
  int phealth, pattack, mhealth, mattack;
  cin >> phealth >> pattack;
  cin >> mhealth >> mattack;
  int k, aupdate, hupdate;
  cin >> k >> aupdate >> hupdate;

  for (int x = 0; x <= k; x++) {
    int new_attack = pattack + x * aupdate;
    int new_health = phealth + (k - x) * hupdate;

    int player_turns = (mhealth + new_attack - 1) / new_attack;
    int monster_turns = (new_health + mattack - 1) / mattack;

    if (player_turns <= monster_turns) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}

int32_t main() {
  fastio;
  int test;
  cin >> test;
  while (test--) {
    solve();
  }
}

