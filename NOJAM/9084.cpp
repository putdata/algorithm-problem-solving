#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int m; cin >> m;
    int dp[10001] = {1};
    for (int i = 0; i < n; i++)
      for (int j = a[i]; j <= m; j++)
        dp[j] += dp[j - a[i]];
    cout << dp[m] << '\n';
  }
  return 0;
}