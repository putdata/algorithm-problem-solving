#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n], sum = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int ans = 1e9;
    for (int i = 0; i < n; i++) ans = min(ans, 2 * (a[n - 1] - a[i]) + 2 * (a[i] - a[0]));
    cout << ans << '\n';
  }
  return 0;
}