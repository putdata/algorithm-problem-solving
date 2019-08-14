#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int m, n, h;
  int dx[] = {1, -1, 0, 0, 0, 0};
  int dy[] = {0, 0, 1, 0, 0, -1};
  int dz[] = {0, 0, 0, 1, -1, 0};
  cin >> m >> n >> h;
  int tom[h][n][m];
  queue<tuple<int, int, int>> q;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < m; k++) {
        cin >> tom[i][j][k];
        if (tom[i][j][k] == 1)
          q.push({i, j, k});
      }
    }
  }
  int ans = 1;
  while (!q.empty()) {
    auto [x, y, z] = q.front();
    q.pop();
    for (int i = 0; i < 6; i++) {
      int nx = x + dx[i], ny = y + dy[i], nz = z + dz[i];
      if (nx < 0 || nx >= h || ny < 0 || ny >= n || nz < 0 || nz >= m || tom[nx][ny][nz] != 0) continue;
      tom[nx][ny][nz] = tom[x][y][z] + 1;
      ans = tom[nx][ny][nz];
      q.push({nx, ny, nz});
    }
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < m; k++) {
        if (tom[i][j][k] == 0) {
          cout << -1;
          return 0;
        }
      }
    }
  }
  cout << ans - 1;
  return 0;
}