#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    bool chk[10] = {};
    int x, ans = 0;
    cin >> x;
    while (x) {
      if (chk[x % 10]) {
        x /= 10;
        continue;
      }
      chk[x % 10] = 1;
      x /= 10;
      ans++;
    }
    cout << ans << '\n';
  }
  return 0;
}