#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  int a[n + 1][4], dp[2][4][2];
  bool t = 0;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j < 4; j++) cin >> a[i][j];
  for (int i = 1; i <= 3; i++)
    dp[0][i][0] = dp[0][i][1] = a[n][i];
  for (int i = n - 1; i > 0; i--) {
    for (int j = 1; j < 4; j++) {
      dp[!t][j][0] = -1e9;
      dp[!t][j][1] = 1e9;
      if (j != 1) {
        dp[!t][j][0] = max(dp[!t][j][0], dp[t][j - 1][0] + a[i][j]);
        dp[!t][j][1] = min(dp[!t][j][1], dp[t][j - 1][1] + a[i][j]);
      }
      dp[!t][j][0] = max(dp[!t][j][0], dp[t][j][0] + a[i][j]);
      dp[!t][j][1] = min(dp[!t][j][1], dp[t][j][1] + a[i][j]);
      if (j != 3) {
        dp[!t][j][0] = max(dp[!t][j][0], dp[t][j + 1][0] + a[i][j]);
        dp[!t][j][1] = min(dp[!t][j][1], dp[t][j + 1][1] + a[i][j]);
      }
    }
    t = !t;
  }
  int maxi = -1e9, mini = 1e9;
  for (int i = 1; i < 4; i++) {
    maxi = max(maxi, dp[t][i][0]);
    mini = min(mini, dp[t][i][1]);
  }
  cout << maxi << ' ' << mini;
  return 0;
}