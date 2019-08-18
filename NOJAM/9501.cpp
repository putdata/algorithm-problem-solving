#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, d, ans = 0;
    cin >> n >> d;
    while (n--) {
      double x, y, z;
      cin >> x >> y >> z;
      if (x * (y / z) >= d * 1.0) ans++;
    }
    cout << ans << '\n';
  }
  return 0;
}