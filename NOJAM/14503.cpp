#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m; cin >> n >> m;
  int r, c, d; cin >> r >> c >> d;
  int a[n][m], dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) cin >> a[i][j];
  queue<tuple<int, int, int>> q;
  q.push({r, c, d});
  int ans = a[r][c] == 0;
  a[r][c] = 2;
  while (!q.empty()) {
    auto [x, y, dir] = q.front();
    q.pop();
    bool chk = false;
    for (int i = 0; i < 4; i++) {
      int nDir = (dir - i + 3) % 4;
      int nx = x + dx[nDir], ny = y + dy[nDir];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m || a[nx][ny]) continue;
      a[nx][ny] = 2;
      chk = true;
      q.push({nx, ny, nDir});
      ans++;
      break;
    }
    if (!chk) {
      int back = (dir + 2) % 4;
      int nx = x + dx[back], ny = y + dy[back];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m || a[nx][ny] == 1) break;
      q.push({nx, ny, dir});
      ans += a[nx][ny] == 0;
      a[nx][ny] = 2;
    }
  }
  cout << ans;
  return 0;
}