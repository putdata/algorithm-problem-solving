#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int dp[3] = {1, 1};
  int n; cin >> n;
  for (int i = 2; i <= n; i++) dp[i % 3] = (dp[(i - 1) % 3] + dp[(i - 2) % 3]) % 10;
  cout << dp[n % 3];
  return 0;
}