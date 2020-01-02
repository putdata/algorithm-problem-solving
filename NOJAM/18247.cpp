#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int x, y; cin >> x >> y;
    if (x < 12 || y < 4) {
      cout << "-1\n";
      continue;
    }
    cout << 11 * y + 4 << '\n';
  }
  return 0;
}