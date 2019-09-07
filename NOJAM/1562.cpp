#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9;
int n, dp[101][10][1 << 10];
int foo(int id, int cur, int chk) {
  if (id == n) return chk == (1 << 10) - 1 ? 1 : 0;
  int &ret = dp[id][cur][chk];
  if (ret == -1) {
    ret = 0;
    if (cur < 9) ret += foo(id + 1, cur + 1, chk | (1 << (cur + 1)));
    if (cur > 0) ret += foo(id + 1, cur - 1, chk | (1 << (cur - 1)));
  }
  return ret %= MOD;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  int ans = 0;
  memset(dp, -1, sizeof(dp));
  for (int i = 1; i < 10; i++)
    ans = (ans + foo(1, i, 1 << i)) % MOD;
  cout << ans;
  return 0;
}