#include <bits/stdc++.h>
using namespace std;

int n, k, dp[1001][1001];
int main() {
  cin >> n >> k;
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0 || j == i) dp[i][j] = 1;
      else dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
    }
  }
  cout << dp[n][k];
  return 0;
}