#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int dx[] = {-1, -2, -2, -1, 1, 2, 2, 1}, dy[] = {-2, -1, 1, 2, -2, -1, 1, 2};
  int n; cin >> n;
  char a[n][n];
  memset(a, 0, sizeof(a));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if ((i + j) % 2 == 0 && !a[i][j]) {
        a[i][j] = 'W';
        for (int k = 0; k < 8; k++) {
          int nx = i + dx[k], ny = j + dy[k];
          if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
          a[nx][ny] = 'B';
        }
      } else if ((i + j) % 2 && !a[i][j]) {
        a[i][j] = 'B';
        for (int k = 0; k < 8; k++) {
          int nx = i + dx[k], ny = j + dy[k];
          if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
          a[nx][ny] = 'W';
        }
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) cout << a[i][j];
    cout << '\n';
  }
  return 0;
}