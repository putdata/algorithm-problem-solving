#include <bits/stdc++.h>
using namespace std;

int main() {
  int dp[1001] = {0, 3, 9}, ans = 0;
  int n; cin >> n;
  for (int i = 3; i <= n; i++) dp[i] = 2 * dp[i - 1] - dp[i - 2] + 3;
  for (int i = 1; i <= n; i++) ans += dp[i];
  cout << ans;
  return 0;
}