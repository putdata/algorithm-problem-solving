#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  bool row[10] = {}, col[10] = {};
  int r, c; cin >> r >> c;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      char x; cin >> x;
      if (x == 'o') row[i] = col[j] = 1;
    }
  }
  int ans = 1e9;
  for (int i = 0; i < 10; i++) {
    if (row[i]) continue;
    for (int j = 0; j < 10; j++) {
      if (col[j]) continue;
      ans = min(ans, abs(r - 1 - i) + abs(c - 1 - j));
    }
  }
  cout << ans;
  return 0;
}