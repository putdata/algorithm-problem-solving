#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int dx[] = {1, 0, 0, -1}, dy[] = {0, 1, -1, 0};
  int n, m; cin >> m >> n;
  char adj[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) cin >> adj[i][j];
  }
  vector<vector<int>> dist(n, vector<int>(m, INF));
  priority_queue<tuple<int, int, int>> pq;
  pq.push({0, 0, 0}); dist[0][0] = 0;
  while (!pq.empty()) {
    auto [cost, x, y] = pq.top();
    pq.pop();
    if (dist[x][y] < -cost) continue;
    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i], ny = y + dy[i];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
      int tmp = -cost + (adj[nx][ny] - '0');
      if (dist[nx][ny] > tmp) {
        dist[nx][ny] = tmp;
        pq.push({-tmp, nx, ny});
      }
    }
  }
  cout << dist[n - 1][m - 1];
  return 0;
}