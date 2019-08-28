#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  int t[1234] = {};
  while (n--) {
    int s, e, need;
    cin >> s >> e >> need;
    for (int i = s; i <= e; i++) t[i] += need;
  }
  int ans = -1e9;
  for (int i = 1; i < 1001; i++) ans = max(ans, t[i]);
  cout << ans;
  return 0;
}