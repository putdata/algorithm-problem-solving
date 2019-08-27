#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n, m; cin >> n >> m;
    int mini = 1e9, maxi = -1e9;
    vector<pair<int, int>> team(n + 1, {0, 0});
    for (int i = 0; i < m; i++) {
      int a, b, p, q;
      cin >> a >> b >> p >> q;
      team[a].first += p; team[a].second += q;
      team[b].first += q; team[b].second += p;
    }
    for (int i = 1; i <= n; i++) {
      auto [x, y] = team[i];
      double s = x, a = y, expect;
      if (!x && !y) expect = 0;
      else expect = s * s * 1000.0 / (s * s + a * a);
      int intPart = expect;
      maxi = max(maxi, intPart);
      mini = min(mini, intPart);
    }
    cout << maxi << '\n' << mini << '\n';
  }
  return 0;
}