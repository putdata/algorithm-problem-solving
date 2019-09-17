#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m, s; cin >> n >> s >> m;
  int a[n + 1];
  for (int i = 1; i <= n; i++) cin >> a[i];
  bool dp[101][1001] = {};
  dp[0][s] = 1;
  for (int i = 1; i <= n; i++) {
    bool ok = false;
    for (int j = 0; j <= m; j++) {
      if (dp[i - 1][j]) {
        int x = j + a[i], y = j - a[i];
        if (x <= m) {
          ok = true;
          dp[i][x] = 1;
        }
        if (y > -1) {
          ok = true;
          dp[i][y] = 1;
        }
      }
    }
    if (!ok) {
      cout << -1;
      return 0;
    }
  }
  for (int i = m; i > -1; i--) {
    if (dp[n][i]) {
      cout << i;
      break;
    }
  }
  return 0;
}