#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int dx[] = {1, 0, 0, -1}, dy[] = {0, 1, -1, 0};
  for (int i = 1;; i++) {
    int n; cin >> n;
    if (!n) break;
    int adj[n][n];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) cin >> adj[i][j];
    }
    vector<vector<int>> dist(n, vector<int>(n, INF));
    priority_queue<tuple<int, int, int>> pq;
    pq.push({-adj[0][0], 0, 0}); dist[0][0] = adj[0][0];
    while (!pq.empty()) {
      auto [cost, x, y] = pq.top();
      pq.pop();
      if (dist[x][y] < -cost) continue;
      for (int i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
        int tmp = -cost + adj[nx][ny];
        if (dist[nx][ny] > tmp) {
          dist[nx][ny] = tmp;
          pq.push({-tmp, nx, ny});
        }
      }
    }
    cout << "Problem " << i << ": " << dist[n - 1][n - 1] << '\n';
  }
  return 0;
}