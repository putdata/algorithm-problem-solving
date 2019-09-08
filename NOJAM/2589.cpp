#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m; cin >> n >> m;
  char s[n][m];
  vector<pair<int, int>> vec;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> s[i][j];
      if (s[i][j] == 'L') vec.push_back({i, j});
    }
  }
  int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};
  int ans = -1e9;
  for (auto it : vec) {
    queue<pair<int, int>> q;
    vector<vector<int>> vis(n, vector<int>(m, 0));
    q.push(it); vis[it.first][it.second] = 0;
    int cnt = 0;
    while (!q.empty()) {
      auto [x, y] = q.front();
      q.pop();
      for (int i = 0; i < 4; i++) {
        int nx = dx[i] + x, ny = dy[i] + y;
        if (nx < 0 || nx >= n || ny < 0 || ny >= m || s[nx][ny] != 'L' || vis[nx][ny]) continue;
        cnt = vis[nx][ny] = vis[x][y] + 1;
        q.push({nx, ny});
      }
    }
    ans = max(ans, cnt);
  }
  cout << ans;
  return 0;
}