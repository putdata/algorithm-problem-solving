#include <bits/stdc++.h>
using namespace std;

int n, m, ans = 0;
int arr[500][500], dx[] = {1, 0, 0, -1}, dy[] = {0, 1, -1, 0};
bool vis[500][500];
void foo(int x, int y, int cnt, int sum) {
  if (cnt == 4) {
    ans = max(ans, sum);
    return;
  }
  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i], ny = y + dy[i];
    if (nx < 0 || nx >= n || ny < 0 || ny >= m || vis[nx][ny]) continue;
    vis[nx][ny] = 1;
    foo(nx, ny, cnt + 1, sum + arr[nx][ny]);
    vis[nx][ny] = 0;
  }
}

void yut(int x, int y) {
  int mini = 1e9;
  int sum = arr[x][y];
  int cnt = 0;
  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i], ny = y + dy[i];
    if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
    sum += arr[nx][ny];
    cnt++;
    mini = min(mini, arr[nx][ny]);
  }
  if (cnt == 4) sum -= mini;
  ans = max(ans, sum);
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      cin >> arr[i][j];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      vis[i][j] = 1;
      yut(i, j);
      foo(i, j, 1, arr[i][j]);
      vis[i][j] = 0;
    }
  }
  cout << ans;
  return 0;
}