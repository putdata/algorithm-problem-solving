#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  bool row[51] = {}, col[51] = {};
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char x; cin >> x;
      if (x == '.') {
        row[i] |= 0;
        col[j] |= 0;
      } else row[i] = col[j] = 1;
    }
  }
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (row[i] == 1) continue;
    for (int j = 0; j < m; j++) {
      if (col[j] == 1) continue;
      row[i] = col[j] = 1;
      cnt++;
      break;
    }
  }
  for (int i = 0; i < n; i++) if (row[i] == 0) cnt++;
  for (int i = 0; i < m; i++) if (col[i] == 0) cnt++;
  cout << cnt;
  return 0;
}