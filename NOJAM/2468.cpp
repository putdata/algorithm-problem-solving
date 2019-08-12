#include <bits/stdc++.h>
using namespace std;

int n, ans = 0;
int area[100][100];
void bfs(int x) {
  int tmp[100][100], safe = 0;
  int dx[] = {1, 0, 0, -1}, dy[] = {0, 1, -1, 0};
  queue<pair<int, int>> q;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      tmp[i][j] = area[i][j];
      if (tmp[i][j] <= x) tmp[i][j] = 0;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (tmp[i][j]) {
        safe++;
        q.push({i, j}); tmp[i][j] = 0;
        while (!q.empty()) {
          auto [x, y] = q.front();
          q.pop();
          for (int k = 0; k < 4; k++) {
            int nx = x + dx[k], ny = y + dy[k];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if (tmp[nx][ny]) {
              tmp[nx][ny] = 0;
              q.push({nx, ny});
            }
          }
        }
      }
    }
  }
  ans = max(ans, safe);
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> area[i][j];
  for (int i = 0; i <= 100; i++) bfs(i);
  cout << ans;
  return 0;
}