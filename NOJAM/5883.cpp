#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  int a[n], ans = 1;
  set<int> sat;
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) {
    if (sat.find(a[i]) != sat.end()) continue;
    sat.insert(a[i]);
    int last = a[0], cnt = 1;
    for (int j = 1; j < n; j++) {
      if (a[i] == a[j]) continue;
      if (last != a[j]) {
        ans = max(ans, cnt);
        last = a[j];
        cnt = 1;
      } else ++cnt;
    }
    ans = max(ans, cnt);
  }
  cout << ans;
  return 0;
}