#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m; cin >> n >> m;
  int a[n][m], ans = 0;
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    for (int j = 0; j < m; j++) {
      a[i][j] = s[j] - '0';
      ans = max(ans, a[i][j]);
    }
  }
  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      if (a[i][j]) a[i][j] = min({a[i - 1][j - 1], a[i - 1][j], a[i][j - 1]}) + 1;
      ans = max(ans, a[i][j]);
    }
  }
  cout << ans * ans;
  return 0;
}