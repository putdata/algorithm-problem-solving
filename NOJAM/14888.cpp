#include <bits/stdc++.h>
using namespace std;

int n, a[11];
pair<int, int> foo(int id, int x, int y, int z, int r, int calc) {
  if (id == n - 1) return {calc, calc};
  int ret1 = -1e9, ret2 = 1e9;
  pair<int, int> tmp;
  if (x) {
    tmp = foo(id + 1, x - 1, y, z, r, calc + a[id + 1]);
    ret1 = max(ret1, tmp.first);
    ret2 = min(ret2, tmp.second);
  }
  if (y) {
    tmp = foo(id + 1, x, y - 1, z, r, calc - a[id + 1]);
    ret1 = max(ret1, tmp.first);
    ret2 = min(ret2, tmp.second);
  }
  if (z) {
    tmp = foo(id + 1, x, y, z - 1, r, calc * a[id + 1]);
    ret1 = max(ret1, tmp.first);
    ret2 = min(ret2, tmp.second);
  }
  if (r) {
    tmp = foo(id + 1, x, y, z, r - 1, calc / a[id + 1]);
    ret1 = max(ret1, tmp.first);
    ret2 = min(ret2, tmp.second);
  }
  return {ret1, ret2};
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];
  int b, c, d, e; cin >> b >> c >> d >> e;
  pair<int, int> ans = foo(0, b, c, d, e, a[0]);
  cout << ans.first << '\n' << ans.second;
  return 0;
}