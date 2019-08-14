#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  int dx[] = {1, 0, 0, -1}, dy[] = {0, 1, -1, 0};
  cin >> n;
  char arr[n][n], t1[n][n], t2[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
      t1[i][j] = t2[i][j] = arr[i][j];
    }
  }
  int cntB = 0, cntT1 = 0, cntT2 = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[i][j] == 'B') {
        cntB++;
        queue<pair<int, int>> q;
        q.push({i, j}); arr[i][j] = 'A';
        while (!q.empty()) {
          auto [x, y] = q.front();
          q.pop();
          for (int k = 0; k < 4; k++) {
            int nx = x + dx[k], ny = y + dy[k];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n || arr[nx][ny] != 'B') continue;
            arr[nx][ny] = 'A';
            q.push({nx, ny});
          }
        }
      }
      if (t1[i][j] == 'R' || t1[i][j] == 'G') {
        char color = t1[i][j];
        cntT1++;
        queue<pair<int, int>> q;
        q.push({i, j}); t1[i][j] = 'A';
        while (!q.empty()) {
          auto [x, y] = q.front();
          q.pop();
          for (int k = 0; k < 4; k++) {
            int nx = x + dx[k], ny = y + dy[k];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n || t1[nx][ny] != color) continue;
            t1[nx][ny] = 'A';
            q.push({nx, ny});
          }
        }
      }
      if (t2[i][j] == 'R' || t2[i][j] == 'G') {
        cntT2++;
        queue<pair<int, int>> q;
        q.push({i, j}); t2[i][j] = 'A';
        while (!q.empty()) {
          auto [x, y] = q.front();
          q.pop();
          for (int k = 0; k < 4; k++) {
            int nx = x + dx[k], ny = y + dy[k];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n || t2[nx][ny] == 'B' || t2[nx][ny] == 'A') continue;
            t2[nx][ny] = 'A';
            q.push({nx, ny});
          }
        }
      }
    }
  }
  cout << cntB + cntT1 << ' ' << cntB + cntT2;
  return 0;
}