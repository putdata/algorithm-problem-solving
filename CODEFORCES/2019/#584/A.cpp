#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  unsigned int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  int ans = 0;
  bool chk[101] = {};
  for (int i = 0; i < n; i++) {
    if (!chk[i]) ans++;
    for (int j = i + 1; j < n; j++) {
      if (chk[j]) continue;
      if (__gcd(a[i], a[j]) == a[i]) {
        chk[j] = 1;
      }
    }
  }
  cout << ans;
  return 0;
}