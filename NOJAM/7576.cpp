#include <bits/stdc++.h>
using namespace std;

int n, m;
int box[1000][1000];
int dx[] = {1, 0, 0, -1}, dy[] = {0, 1, -1, 0};
int day;
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> m >> n;
  queue<pair<int, int>> to;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> box[i][j];
      if (box[i][j] == 1) to.push({i, j});
    }
  }
  while (!to.empty()) {
    auto [x, y] = to.front();
    to.pop();
    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i], ny = y + dy[i];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
      if (box[nx][ny] == 0) {
        box[nx][ny] = box[x][y] + 1;
        to.push({nx, ny});
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      day = max(day, box[i][j]);
      if (box[i][j] == 0) {
        cout << - 1;
        return 0;
      }
    }
  }
  cout << day - 1;
  return 0;
}