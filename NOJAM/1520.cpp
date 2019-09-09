#include <bits/stdc++.h>
using namespace std;

int n, m, a[501][501], dp[501][501];
bool vis[501][501];
int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};
int foo(int x, int y) {
  if (x == n - 1 && y == m - 1) return 1;
  int &ret = dp[x][y];
  if (ret == -1) {
    ret = 0;
    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i], ny = y + dy[i];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m || vis[nx][ny] || a[nx][ny] >= a[x][y]) continue;
      vis[nx][ny] = 1;
      ret += foo(nx, ny);
      vis[nx][ny] = 0;
    }
  }
  return ret;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n >> m;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) cin >> a[i][j];
  memset(dp, -1, sizeof(dp));
  cout << foo(0, 0);
  return 0;
}