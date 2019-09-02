#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> p(n + 1, 0);
    int dp[n + 1][n + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++) {
      int x; cin >> x;
      p[i] = p[i - 1] + x;
    }
    for (int len = 1; len < n; len++) {
      for (int i = 1; i <= n - len; i++) {
        dp[i][i + len] = 1e9;
        for (int k = i; k < i + len; k++)
          dp[i][i + len] = min(dp[i][i + len], dp[i][k] + dp[k + 1][i + len] + p[i + len] - p[i - 1]);
      }
    }
    cout << dp[1][n] << '\n';
  }
  return 0;
}