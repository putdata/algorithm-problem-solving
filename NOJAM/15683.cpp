#include <bits/stdc++.h>
using namespace std;

int n, m, room[8][8], ans = 1e9;
int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
vector<pair<int, int>> cctv;
void fill(int cur, int dir) {
  auto [x, y] = cctv[cur];
  while (1) {
    x = x + dx[dir], y = y + dy[dir];
    if (x < 0 || x >= n || y < 0 || y >= m || room[x][y] == 6) break;
    if (room[x][y] == 0) room[x][y] = cur + 10;
  }
}

void unFill(int cur, int dir) {
  auto [x, y] = cctv[cur];
  while (1) {
    x = x + dx[dir], y = y + dy[dir];
    if (x < 0 || x >= n || y < 0 || y >= m || room[x][y] == 6) break;
    if (room[x][y] == cur + 10) room[x][y] = 0;
  }
}

void foo(int cur) {
  if (cur == cctv.size()) {
    int cnt = 0;
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        if (room[i][j] == 0) cnt++;
    ans = min(ans, cnt);
    return;
  }
  auto [x, y] = cctv[cur];
  int type = room[x][y];
  if (type == 1) {
    for (int i = 0; i < 4; i++) {
      fill(cur, i);
      foo(cur + 1);
      unFill(cur, i);
    }
  } else if (type == 2) {
    for (int i = 0; i < 2; i++) {
      fill(cur, i);
      fill(cur, i + 2);
      foo(cur + 1);
      unFill(cur, i);
      unFill(cur, i + 2);
    }
  } else if (type == 3) {
    for (int i = 0; i < 4; i++) {
      fill(cur, i);
      fill(cur, (i + 1) % 4);
      foo(cur + 1);
      unFill(cur, i);
      unFill(cur, (i + 1) % 4);
    }
  } else if (type == 4) {
    for (int i = 0; i < 4; i++) {
      fill(cur, i);
      fill(cur, (i + 1) % 4);
      fill(cur, (i + 2) % 4);
      foo(cur + 1);
      unFill(cur, i);
      unFill(cur, (i + 1) % 4);
      unFill(cur, (i + 2) % 4);
    }
  } else {
    for (int i = 0; i < 4; i++) fill(cur, i);
    foo(cur + 1);
    for (int i = 0; i < 4; i++) unFill(cur, i);
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> room[i][j];
      if (room[i][j] && room[i][j] != 6) cctv.push_back({i, j});
    }
  }
  foo(0);
  cout << ans;
  return 0;
}