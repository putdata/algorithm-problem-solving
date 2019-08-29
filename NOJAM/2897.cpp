#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int r, c; cin >> r >> c;
  string s[r];
  int ans[5] = {};
  for (int i = 0; i < r; i++) cin >> s[i];
  for (int i = 0; i < r - 1; i++) {
    for (int j = 0; j < c - 1; j++) {
      if (s[i][j] == '#' || s[i][j + 1] == '#' || s[i + 1][j] == '#' || s[i + 1][j + 1] == '#') continue;
      int tmp = (s[i][j] == 'X') + (s[i][j + 1] == 'X') + (s[i + 1][j] == 'X') + (s[i + 1][j + 1] == 'X');
      ans[tmp]++;
    }
  }
  for (int i = 0; i < 5; i++) cout << ans[i] << '\n';
  return 0;
}