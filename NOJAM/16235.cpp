#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m, k; cin >> n >> m >> k;
  int map[n][n], a[n][n];
  vector<int> tree[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
      map[i][j] = 5;
    }
  }
  for (int i = 0; i < m; i++) {
    int x, y, z; cin >> x >> y >> z;
    tree[x - 1][y - 1].push_back(z);
  }
  int dx[] = {-1 , -1, -1, 0, 0, 1, 1, 1}, dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) sort(tree[i][j].begin(), tree[i][j].end());
  for (int time = 1; time <= k; time++) {
    vector<pair<int, int>> newT;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (tree[i][j].size() == 0) continue;
        for (auto it = tree[i][j].begin(); it != tree[i][j].end();) {
          if (map[i][j] >= *it) {
            map[i][j] -= *it;
            (*it)++;
            if (*it % 5 == 0) newT.push_back({i, j});
            it++;
          } else {
            for (auto dead = it; dead != tree[i][j].end();) {
              map[i][j] += *dead / 2;
              dead = tree[i][j].erase(dead);
            }
          }
        }
      }
    }
    for (auto it : newT) {
      auto [x, y] = it;
      for (int i = 0; i < 8; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
        tree[nx][ny].insert(tree[nx][ny].begin(), 1);
      }
    }
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++) map[i][j] += a[i][j];
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) ans += tree[i][j].size();
  }
  cout << ans;
  return 0;
}