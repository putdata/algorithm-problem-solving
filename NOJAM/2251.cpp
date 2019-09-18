#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int a, b, c; cin >> a >> b >> c;
  bool chk[a + 1][b + 1][c + 1];
  vector<bool> ans(c + 1, 0);
  memset(chk, 0, sizeof(chk));
  queue<tuple<int, int, int>> q;
  q.push({0, 0, c}); chk[0][0][c] = 1; ans[c] = 1;
  while (!q.empty()) {
    auto [x, y, z] = q.front();
    q.pop();
    ans[x + z] = 1;
    if (z > b - y && !chk[x][b][z - b + y])  {
      q.push({x, b, z - b + y});
      chk[x][b][z - b + y] = 1;
    } else if (y + z <= b && !chk[x][y + z][0]) {
      q.push({x, y + z, 0});
      chk[x][y + z][0] = 1;
    }
    if (z > a - x && !chk[a][y][z - a + x]) {
      q.push({a, y, z - a + x});
      chk[a][y][z - a + x] = 1;
    } else if (x + z <= a && !chk[x + z][y][0]) {
      q.push({x + z, y, 0});
      chk[x + z][y][0] = 1;
    }
    if (y > c - z && !chk[x][y - c + z][c])  {
      q.push({x, y - c + z, c});
      chk[x][y - c + z][c] = 1;
    } else if (y + z <= c && !chk[x][0][y + z]) {
      q.push({x, 0, y + z});
      chk[x][0][y + z] = 1;
    }
    if (y > a - x && !chk[a][y - a + x][z]) {
      q.push({a, y - a + x, z});
      chk[a][y - a + x][z] = 1;
    } else if (x + y <= a && !chk[x + y][0][z]) {
      q.push({x + y, 0, z});
      chk[x + y][0][z] = 1;
    }
    if (x > b - y && !chk[x - b + y][b][z])  {
      q.push({x - b + y, b, z});
      chk[x - b + y][b][z] = 1;
    } else if (x + y <= b && !chk[0][x + y][z]) {
      q.push({0, x + y, z});
      chk[0][x + y][z] = 1;
    }
    if (x > c - z && !chk[x - c + z][y][c]) {
      q.push({x - c + z, y, c});
      chk[x - c + z][y][c] = 1;
    } else if (x + z <= c && !chk[0][y][x + z]) {
      q.push({0, y, x + z});
      chk[0][y][x + z] = 1;
    }
  }
  for (int i = 0; i <= c; i++)
    if (ans[i]) cout << i << ' ';
  return 0;
}