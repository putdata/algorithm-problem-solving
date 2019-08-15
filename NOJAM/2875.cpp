#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  int ans = 0;
  for (int i = 0; i <= k; i++) {
    int nn = n - i;
    int nm = m - (k - i);
    if (nn < 0 || nm < 0) continue;
    ans = max(ans, min(nn / 2, nm));
  }
  cout << ans;
  return 0;
}