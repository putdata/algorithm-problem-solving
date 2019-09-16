#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m, k; cin >> n >> m >> k;
  int x = (k - 1) / m, y = (k - 1) % m;
  int dp[16][16] = {};
  dp[1][1] = 1;
  if (!k) x = y = 0;
  for (int i = 1; i <= x + 1; i++)
    for (int j = 1; j <= y + 1; j++)
      if (i + j != 2) dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
  for (int i = x + 1; i <= n; i++)
    for (int j = y + 1; j <= m; j++)
      if (i + j != x + y + 2) dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
  cout << dp[n][m];
  return 0;
}