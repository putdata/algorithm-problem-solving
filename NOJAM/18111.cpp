#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m, b; cin >> n >> m >> b;
  int a[n][m], ans = 1e9, high = 0;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) cin >> a[i][j];
  for (int h = 0; h <= 256; h++) {
    int time = 0, block = b, need = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        int diff = a[i][j] - h;
        if (diff > 0) {
          time += diff * 2;
          block += diff;
        } else need += -diff;
      }
    }
    if (block < need) break;
    if (ans >= time + need) {
      ans = time + need;
      high = h;
    }
  }
  cout << ans << ' ' << high;
  return 0;
}