#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  int dp[2][100001] = {};
  while (t--) {
    int n; cin >> n;
    int x, y; cin >> x >> y;
    if (n == 1) {
      cout << min(x, y) << '\n';
      continue;
    }
    bool tog = 0;
    fill(&dp[0][0], &dp[0][100001], INF);
    dp[0][x] = 0, dp[0][0] = y; // A X시간만큼 사용했을때 B 사용한 시간
    int time = max(x, y);
    for (int i = 1; i < n; i++) {
      cin >> x >> y;
      fill(&dp[!tog][0], &dp[!tog][100001], INF);
      for (int j = 0; j <= time; j++) {
        if (dp[tog][j] != INF) {
          dp[!tog][j] = min(dp[!tog][j], dp[tog][j] + y);
          dp[!tog][j + x] = min(dp[!tog][j + x], dp[tog][j]);
        }
      }
      time += max(x, y);
      tog ^= 1;
    }
    int mini = 2e9;
    for (int i = 0; i <= time; i++) if (dp[tog][i]) mini = min(mini, max(i, dp[tog][i]));
    cout << mini << '\n';
  }
  return 0;
}