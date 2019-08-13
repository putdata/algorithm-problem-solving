#include <bits/stdc++.h>
using namespace std;

long long dp[123];
int main() {
  int n; cin >> n;
  for (int i = 1; i <= 6; i++) dp[i] = i;
  for (int i = 7; i <= n; i++) {
    for (int j = 2; j < i; j++)
      dp[i] = max(dp[i], dp[i - j - 1] * j);
  }
  cout << dp[n];
  return 0;
}