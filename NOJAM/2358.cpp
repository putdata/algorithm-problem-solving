#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  int x[n], y[n];
  for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
  sort(x, x + n); sort(y, y + n);
  int cntX = 0, cntY = 0;
  long long ans = 0;
  for (int i = 1; i < n; i++) {
    if (x[i] == x[i - 1]) cntX++;
    else {
      if (cntX) ans++;
      cntX = 0;
    }
    if (y[i] == y[i - 1]) cntY++;
    else {
      if (cntY) ans++;
      cntY = 0;
    }
  }
  ans += (cntX ? 1 : 0) + (cntY ? 1 : 0);
  cout << ans;
  return 0;
}