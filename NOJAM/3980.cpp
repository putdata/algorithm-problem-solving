#include <bits/stdc++.h>
using namespace std;

int pos[1 << 11][11], cost[11][11];
int foo(int cur, int chk) {
  if (cur == 11) return chk == (1 << 11) - 1 ? 0 : -1e8;
  if (pos[chk][cur] == 0) {
    pos[chk][cur] = -1e8;
    for (int i = 0; i < 11; i++) {
      if (cost[cur][i] && !(chk & (1 << i)))
        pos[chk][cur] = max(pos[chk][cur], cost[cur][i] + foo(cur + 1, chk | (1 << i)));
    }
  }
  return pos[chk][cur];
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    for (int i = 0; i < 11; i++)
      for (int j = 0; j < 11; j++) cin >> cost[i][j];
    cout << foo(0, 0) << '\n';
    memset(pos, 0, sizeof(pos));
  }
  return 0;
}