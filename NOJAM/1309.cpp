#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  int dp[100001] = {1, 3};
  for (int i = 2; i <= n; i++) dp[i] = (dp[i - 1] * 2 + dp[i - 2]) % 9901;
  cout << dp[n];
  return 0;
}