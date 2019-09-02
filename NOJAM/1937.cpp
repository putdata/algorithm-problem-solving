#include <bits/stdc++.h>
using namespace std;

int n, dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};
vector<vector<int>> vec, dp;
int foo(int x, int y) {
  if (dp[x][y] > -1) return dp[x][y];
  int res = 1;
  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i], ny = y + dy[i];
    if (nx < 0 || nx >= n || ny < 0 || ny >= n || vec[nx][ny] <= vec[x][y]) continue;
    res = max(res, foo(nx, ny) + 1);
  }
  return dp[x][y] = res;
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  vec.resize(n, vector<int>(n));
  dp.resize(n, vector<int>(n, -1));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> vec[i][j];
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) ans = max(ans, foo(i, j));
  }
  cout << ans;
  return 0;
}