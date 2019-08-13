#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int dx[] = {1, 0, 0, -1, 1, 1, -1, -1}, dy[] = {0, 1, -1, 0, 1, -1, -1, 1};
  for (;;) {
    int w, h, ans = 0;
    cin >> w >> h;
    if (w == 0) break;
    int m[h][w];
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++)
        cin >> m[i][j];
    }
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (m[i][j]) {
          ans++;
          queue<pair<int, int>> q;
          q.push({i, j}); m[i][j] = 0;
          while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            for (int k = 0; k < 8; k++) {
              int nx = x + dx[k], ny = y + dy[k];
              if (nx < 0 || nx >= h || ny < 0 || ny >= w || !m[nx][ny]) continue;
              m[nx][ny] = 0;
              q.push({nx, ny});
            }
          }
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}