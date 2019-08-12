#include <bits/stdc++.h>
using namespace std;

int n, m, ans = -1e9;
int lab[8][8], origin;
int dx[] = {1, 0, 0, -1}, dy[] = {0, 1, -1, 0};
vector<pair<int, int>> virus;
void wall(int proc) {
  if (proc == 3) {
    int copy[8][8], spread = 0;
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++) copy[i][j] = lab[i][j];
    queue<pair<int, int>> q;
    for (auto it : virus) q.push({it.first, it.second});
    while (!q.empty()) {
      auto [x, y] = q.front();
      q.pop();
      for (int i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
        if (copy[nx][ny] == 0) {
          copy[nx][ny] = 2;
          q.push({nx, ny});
          spread++;
        }
      }
    }
    ans = max(ans, n * m - (spread + origin + (int) virus.size() + 3));
    return;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (lab[i][j] == 0) {
        lab[i][j] = 1;
        wall(proc + 1);
        lab[i][j] = 0;
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0;j < m; j++) {
      cin >> lab[i][j];
      if (lab[i][j] == 1) origin++;
      else if (lab[i][j] == 2) virus.push_back({i, j});
    }
  }
  wall(0);
  cout << ans;
  return 0;
}