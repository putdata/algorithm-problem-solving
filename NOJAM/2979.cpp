#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, ans = 0; cin >> a >> b >> c;
  int chk[234] = {};
  for (int i = 0; i < 3; i++) {
    int x, y;
    cin >> x >> y;
    for (int j = x; j < y; j++) chk[j]++;
  }
  for (int i = 1; i <= 100; i++) {
    if (chk[i] == 1) ans += a;
    else if (chk[i] == 2) ans += 2 * b;
    else if (chk[i] == 3) ans += 3 * c;
  }
  cout << ans;
  return 0;
}