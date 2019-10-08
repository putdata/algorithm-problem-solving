#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  int ans = 0;
  vector<bool> cow(11), f(11);
  while (n--) {
    int x, y; cin >> x >> y;
    if (f[x] && cow[x] != y) ans++;
    f[x] = 1;
    cow[x] = y;
  }
  cout << ans;
  return 0;
}