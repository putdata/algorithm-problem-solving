#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m;
  cin >> n >> m;
  int p[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      cin >> p[i][j];
  }
  int cnt = 0, maxi = 0;
  int dx[] = {1, 0, 0, -1}, dy[] = {0, 1, -1, 0};
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (p[i][j]) {
        int area = 1;
        cnt++;
        queue<pair<int, int>> q;
        q.push({i, j}); p[i][j] = 0;
        while (!q.empty()) {
          auto [x, y] = q.front();
          q.pop();
          for (int k = 0; k < 4; k++) {
            int nx = x + dx[k], ny = y + dy[k];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m || !p[nx][ny]) continue;
            area++;
            p[nx][ny] = 0;
            q.push({nx, ny});
          }
        }
        maxi = max(maxi, area);
      }
    }
  }
  cout << cnt << '\n' << maxi;
  return 0;
}