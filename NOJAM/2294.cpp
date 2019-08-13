#include <bits/stdc++.h>
using namespace std;

const int MAX = 123456;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, k;
  cin >> n >> k;
  int coin[n], dp[MAX];
  fill(dp, dp + MAX, MAX); dp[0] = 0;
  for (int i = 0; i < n; i++) cin >> coin[i];
  for (int i = 0; i < k; i++) {
    for (int j = 0; j < n; j++)
      dp[i + coin[j]] = min(dp[i] + 1, dp[i + coin[j]]);
  }
  dp[k] == MAX ? cout << -1 : cout << dp[k];
  return 0;
}