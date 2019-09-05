#include <bits/stdc++.h>
using namespace std;

int n;
double dp[1 << 20], p[20][20];
double foo(int cur, int chk) {
  if (cur == n) return chk == (1 << n) - 1 ? 1.0 : -1.0;
  if (dp[chk] == 0.0) {
    dp[chk] = -1.0;
    for (int i = 0; i < n; i++) {
      if (p[cur][i] > 0 && !(chk & (1 << i)))
        dp[chk] = max(dp[chk], (p[cur][i] * 0.01) * foo(cur + 1, chk | (1 << i)));
    }
  }
  return dp[chk];
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> p[i][j];
  cout.precision(8);
  cout << fixed << max(foo(0, 0) * 100.0, 0.0);
  return 0;
}