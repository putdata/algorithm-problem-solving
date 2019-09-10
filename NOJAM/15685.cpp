#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  int map[101][101] = {}, ans = 0;
  int dx[] = {1, 0, -1, 0}, dy[] = {0, -1, 0, 1};
  while (n--) {
    int x, y, d, g; cin >> x >> y >> d >> g;
    vector<int> curve;
    curve.push_back(d);
    map[y][x] = 1;
    map[y += dy[d]][x += dx[d]] = 1;
    for (int i = 1; i <= g; i++) {
      int size = curve.size();
      map[y][x] = 1;
      for (int j = size - 1; j > -1; j--) {
        int dir = (curve[j] + 1) % 4;
        map[y += dy[dir]][x += dx[dir]] = 1;
        curve.push_back(dir);
      }
    }
  }
  for (int i = 0; i < 100; i++)
    for (int j = 0; j < 100; j++)
      if (map[i][j] && map[i][j + 1] && map[i + 1][j] && map[i + 1][j + 1]) ans++;
  cout << ans;
  return 0;
}