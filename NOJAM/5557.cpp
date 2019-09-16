#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  vector<int> a(n);
  vector<vector<long long>> dp(n, vector<long long>(21, 0));
  for (int i = 0; i < n; i++) cin >> a[i];
  dp[0][a[0]] = 1;
  for (int i = 1; i < n -1; i++) {
    for (int j = 0; j < 21; j++) {
      if (j + a[i] < 21) dp[i][j + a[i]] += dp[i - 1][j];
      if (j - a[i] > -1) dp[i][j - a[i]] += dp[i - 1][j];
    }
  }
  cout << dp[n - 2][a[n - 1]];
  return 0;
}