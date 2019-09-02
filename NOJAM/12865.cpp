#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, k; cin >> n >> k;
  int dp[2][100001] = {};
  bool on = 0;
  for (int i = 0; i < n; i++) {
    int x, y; cin >> x >> y;
    for (int j = 1; j <= k; j++) {
      dp[on][j] = j - x < 0 ? dp[!on][j] : max(dp[!on][j], dp[!on][j - x] + y);
    }
    on = !on;
  }
  cout << max(dp[on][k], dp[!on][k]);
  return 0;
}