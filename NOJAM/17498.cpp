#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m, d; cin >> n >> m >> d;
  long long map[n][m], dp[n][m];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) cin >> map[i][j];
  memset(dp, -1, sizeof(dp));
  for (int i = 0; i < m; i++) dp[0][i] = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < m; j++) {
      for (int y = -d + 1; y < d; y++) {
        for (int x = 1; x <= d - abs(y); x++) {
          if (i + x < 0 || i + x >= n || j + y < 0 || j + y >= m) continue;
          if (dp[i + x][j + y] == -1) dp[i + x][j + y] = dp[i][j] + map[i][j] * map[i + x][j + y];
          else dp[i + x][j + y] = max(dp[i + x][j + y], dp[i][j] + map[i][j] * map[i + x][j + y]);
        }
      }
    }
  }
  long long maxi = -1e18;
  for (int i = 0; i < m; i++) maxi = max(maxi, dp[n - 1][i]);
  cout << maxi;
  return 0;
}