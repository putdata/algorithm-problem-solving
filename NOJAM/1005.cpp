#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n, k, w; cin >> n >> k;
    vector<vector<int>> vec(n + 1);
    vector<int> fore(n + 1, 0), cost(n + 1);
    for (int i = 1; i <= n; i++) cin >> cost[i];
    while (k--) {
      int x, y;
      cin >> x >> y;
      vec[x].push_back(y);
      fore[y]++;
    }
    cin >> w;
    vector<int> dp(n + 1, 0);
    queue<int> q;
    for (int i = 1; i <= n; i++)
      if (!fore[i]) q.push(i);
    while (fore[w]) {
      int top = q.front();
      q.pop();
      for (auto it : vec[top]) {
        if (--fore[it] == 0) q.push(it);
        dp[it] = max(dp[it], dp[top] + cost[top]);
      }
    }
    cout << dp[w] + cost[w] << '\n';
  }
  return 0;
}