#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int m, n, k;
  int dx[] = {1, 0, 0, -1}, dy[] = {0, 1, -1, 0};
  cin >> m >> n >> k;
  vector<vector<bool>> s(m, vector<bool>(n, 0));
  vector<int> ans;
  while (k--) {
    int sx, sy, ex, ey;
    cin >> sy >> sx >> ey >> ex;
    for (int i = sx; i < ex; i++) {
      for(int j = sy; j < ey; j++) s[i][j] = 1;
    }
    for (int i = ex; i < sx; i++) {
      for(int j = ey; j < sy; j++) s[i][j] = 1;
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (!s[i][j]) {
        int cnt = 1;
        queue<pair<int, int>> q;
        q.push({i, j}); s[i][j] = 1;
        while (!q.empty()) {
          auto [x, y] = q.front();
          q.pop();
          for(int k = 0; k < 4; k++) {
            int nx = x + dx[k], ny = y + dy[k];
            if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
            if (s[nx][ny]) continue;
            s[nx][ny] = 1;
            cnt++;
            q.push({nx, ny});
          }
        }
        ans.push_back(cnt);
      }
    }
  }
  sort(ans.begin(), ans.end());
  cout << (int) ans.size() << '\n';
  for (auto it : ans) cout << it << ' ';
  return 0;
}