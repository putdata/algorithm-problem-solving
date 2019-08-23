#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int p[110][110] = {};
  for (int i = 1; i <= n; i++) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for (int x = x1; x < x1 + x2; x++)
      for (int y = y1; y < y1 + y2; y++)
        p[x][y] = i;
  }
  for (int i = 1; i <= n; i++) {
    int cnt = 0;
    for (int x = 0; x < 102; x++)
      for (int y = 0; y < 102; y++)
        cnt += p[x][y] == i;
    cout << cnt << '\n';
  }
  return 0;
}