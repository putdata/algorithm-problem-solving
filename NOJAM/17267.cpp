#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m, l, r; cin >> n >> m >> l >> r;
  int map[n][m];
  queue<tuple<int, int, int, int>> q;
  memset(map, 0, sizeof(map));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char x; cin >> x;
      if (x == '1') map[i][j] = 1;
      else if (x == '2') {
        q.push({i, j, l, r});
      }
    }
  }
  while (!q.empty()) {
    auto [x, y, goL, goR] = q.front();
    q.pop();
    map[x][y] = 0;
    for (int i = x; i < n && !map[i][y]; i++) {
      map[i][y] = 2;
      if (y - 1 >= 0 && goL && !map[i][y - 1]) {
        map[i][y - 1] = 2;
        q.push({i, y - 1, goL - 1, goR});
      }
      if (y + 1 < m && goR && !map[i][y + 1]) {
        map[i][y + 1] = 2;
        q.push({i, y + 1, goL, goR - 1});
      }
    }
    map[x][y] = 0;
    for (int i = x; i > -1 && !map[i][y]; i--) {
      map[i][y] = 2;
      if (y - 1 >= 0 && goL && !map[i][y - 1]) {
        map[i][y - 1] = 2;
        q.push({i, y - 1, goL - 1, goR});
      }
      if (y + 1 < m && goR && !map[i][y + 1]) {
        map[i][y + 1] = 2;
        q.push({i, y + 1, goL, goR - 1});
      }
    }
  }
  int cnt = 0;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) if (map[i][j] == 2) cnt++;
  cout << cnt;
  return 0;
}