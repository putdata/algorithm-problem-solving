#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  int dp[50001] = {0, 1, 2};
  for (int i = 3; i <= n; i++) {
    dp[i] = 1e9;
    for (int j = 1; j * j <= i; j++)
      dp[i] = min(dp[i], dp[i - j * j] + 1);
  }
  cout << dp[n];
  return 0;
}