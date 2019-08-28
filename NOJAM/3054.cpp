#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  string s; cin >> s;
  int size = s.size();
  char ans[5][100];
  int dx[] = {-2, -1, -1, 0, 0, 1, 1, 2}, dy[] = {0, -1, 1, -2, 2, -1, 1, 0};
  memset(ans, '.', sizeof(ans));
  for (int i = 0; i < size; i++) {
    int x = 2, y = 4 * i + 2;
    ans[x][y] = s[i];
    bool peter = (i + 1) % 3 > 0;
    for (int j = 0; j < 8; j++) {
      int nx = x + dx[j], ny = y + dy[j];
      if (ans[nx][ny] == '*') continue;
      ans[nx][ny] = peter ? '#' : '*';
    }
  }
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < size * 4 + 1; j++)
      cout << ans[i][j];
    cout << '\n';
  }
  return 0;
}