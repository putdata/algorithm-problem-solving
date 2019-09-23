#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m; cin >> n >> m;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a.begin(), a.end());
  long long ans = 1e14;
  for (int i = 0; i < n; i++) {
    auto it = lower_bound(a.begin(), a.end(), a[i] + m);
    if (it == a.end()) continue;
    ans = min(ans, *it - a[i]);
  }
  cout << ans;
  return 0;
}