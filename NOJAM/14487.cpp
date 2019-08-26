#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int a[2 * n + 1], ans = 1e9;
  memset(a, 0, sizeof(a));
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    a[i] += a[i - 1] + x;
  }
  for (int i = n + 1; i <= 2 * n; i++) a[i] = a[i - 1] + a[i - n] - a[i - n - 1];
  for (int i = 0; i <= n; i++) ans = min(ans, a[i + n - 1] - a[i]);
  cout << ans;
  return 0;
}