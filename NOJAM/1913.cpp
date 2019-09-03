#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m; cin >> n >> m;
  int x = 0, y = 0, ansX, ansY, a[n][n];
  memset(a, 0, sizeof(a));
  int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1}, dir = 0;
  for (int i = n * n; i; i--) {
    a[x][y] = i;
    if (i == m) ansX = x + 1, ansY = y + 1;
    int nx = x + dx[dir], ny = y + dy[dir];
    if(nx < 0 || nx >= n || ny < 0 || ny >= n || a[nx][ny]) dir = (dir + 1) % 4;
    x += dx[dir]; y += dy[dir];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) cout << a[i][j] << ' ';
    cout << '\n';
  }
  cout << ansX << ' ' << ansY;
  return 0;
}