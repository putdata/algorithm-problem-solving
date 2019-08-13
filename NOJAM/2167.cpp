#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m, t;
  cin >> n >> m;
  vector<vector<int>> vec(n + 1, vector<int>(m + 1, 0));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> vec[i][j];
      vec[i][j] += vec[i - 1][j] + vec[i][j - 1]  - vec[i - 1][j - 1];
    }
  }
  cin >> t;
  while (t--) {
    int i, j, x, y;
    cin >> i >> j >> x >> y;
    cout << vec[x][y] - vec[x][j - 1] - vec[i - 1][y] + vec[i - 1][j - 1] << '\n';
  }
  return 0;
}