#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m; cin >> n >> m;
  vector<vector<int>> vec(n, vector<int>(n, (int) 1e5));
  while (m--) {
    int x, y; cin >> x >> y;
    vec[x - 1][y - 1] = vec[y - 1][x - 1] = 1;
  }
  for (int i = 0; i < n; i++) vec[i][i] = 0;
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        vec[i][j] = min(vec[i][j], vec[i][k] + vec[k][j]);
  }
  int mini = 1e9, ans;
  for (int i = 0; i < n; i++) {
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      if (j == i) continue;
      cnt += vec[i][j];
    }
    if (cnt < mini) {
      mini = cnt;
      ans = i;
    }
  }
  cout << ans + 1;
  return 0;
}