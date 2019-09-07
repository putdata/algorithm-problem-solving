#include <bits/stdc++.h>
using namespace std;

int n, k, dp[3001][8][1001], b[1001][3];
int foo(int cur, int cnt, int status) {
  if (cnt == k) return 0;
  if (cur >= 3 * n) return -1e9;
  int &ret = dp[cur][status][cnt];
  if (ret == -2e9) {
    if (status & 1) ret = foo(cur + 1, cnt, status >> 1);
    else {
      ret = foo(cur + 1, cnt, status >> 1);
      if (cur % 3 != 2 && (status & 2) == 0)
        ret = max(ret, b[cur / 3][cur % 3] + b[cur / 3][cur % 3 + 1] + foo(cur + 2, cnt + 1, status >> 2));
      if (cur / 3 != n - 1)
        ret = max(ret, b[cur / 3][cur % 3] + b[cur / 3 + 1][cur % 3] + foo(cur + 1, cnt + 1, (status >> 1) | (1 << 2)));
    }
  }
  return ret;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n >> k;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < 3; j++) cin >> b[i][j];
  for (int i = 0; i <= 3 * n; i++)
    for (int j = 0; j < 8; j++)
      for (int cnt = 0; cnt <= k; cnt++) dp[i][j][cnt] = -2e9;
  cout << foo(0, 0, 0);
  return 0;
}