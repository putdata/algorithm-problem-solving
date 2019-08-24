#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  string a, b; cin >> a >> b;
  int alen = a.size(), blen = b.size();
  int x, y;
  for (int i = 0; i < alen; i++) {
    bool out = false;
    for (int j = 0; j < blen; j++) {
      if (a[i] == b[j]) {
        x = i; y = j;
        out = true;
        break;
      }
    }
    if (out) break;
  }
  char ans[blen][alen];
  memset(ans, '.', sizeof(ans));
  for (int i = 0; i < blen; i++) ans[i][x] = b[i];
  for (int i = 0; i < alen; i++) ans[y][i] = a[i];
  for (int i = 0; i < blen; i++) {
    for (int j = 0; j < alen; j++) cout << ans[i][j];
    cout << '\n';
  }
  return 0;
}