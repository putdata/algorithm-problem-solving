#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m; cin >> n >> m;
  string s[n * 2];
  for (int i = 0; i < 2 * n; i++) cin >> s[i];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (s[i][j] != s[i + n][2 * j] || s[i][j] != s[i + n][2 * j + 1]) {
        cout << "Not Eyfa";
        return 0;
      }
    }
  }
  cout << "Eyfa";
  return 0;
}