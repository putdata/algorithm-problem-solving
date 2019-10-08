#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
  int n, k, m; cin >> n >> k >> m;
  vector<pair<int, int>> adj[n + 1][n + 1];
  while (m--) {
    int r, c, _r, _c; cin >> r >> c >> _r >> _c;
    adj[r][c].push_back({_r, _c});
    adj[_r][_c].push_back({r, c});
  }
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++) sort(adj[i][j].begin(), adj[i][j].end());
  pair<int, int> cow[k];
  int ans = 0;
  for (int i = 0; i < k; i++) cin >> cow[i].first >> cow[i].second;
  for (int i = 0; i < k; i++) {
    bool vis[n + 1][n + 1];
    memset(vis, 0, sizeof(vis));
    queue<pair<int, int>> q;
    q.push(cow[i]); vis[cow[i].first][cow[i].second] = 1;
    while (!q.empty()) {
      auto [x, y] = q.front();
      q.pop();
      for (int j = 0; j < 4; j++) {
        int nx = x + dx[j], ny = y + dy[j];
        if (nx < 1 || nx > n || ny < 1 || ny > n || vis[nx][ny] || binary_search(adj[x][y].begin(), adj[x][y].end(), make_pair(nx, ny))) continue;
        vis[nx][ny]=1;
        q.push({nx, ny});
      }
    }
    for (int j = i + 1; j < k; j++) if (!vis[cow[j].first][cow[j].second])
      ans++;
  }
  cout << ans;
  return 0;
}