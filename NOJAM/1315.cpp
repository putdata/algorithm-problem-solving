#include <bits/stdc++.h>
using namespace std;

int n, dp[1001][1001];
vector<tuple<int, int, int>> t;
vector<bool> clear;
int foo(int STR, int INT) {
  int &ret = dp[STR][INT];
  if (ret != -1) return ret;
  ret = 0;
  int cnt = 0, point = 0, stack[101] = {};
  for (int i = 0; i < n; i++) {
    auto [x, y, z] = t[i];
    if ((STR >= x || INT >= y)) {
      if (!clear[i]) {
        point += z;
        clear[i] = 1;
        stack[cnt++] = i;
      }
      ret++;
    }
  }
  if (point) for (int i = 0; i <= point; i++) {
      if (STR + i > 1000) break;
      ret = max(ret, foo(STR + i, min(1000, INT + point - i)));
  }
  for (int i = 0; i < cnt; i++) clear[stack[i]] = 0;
  return ret;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  t.resize(n); clear.resize(n);
  for (int i = 0; i < n; i++) {
    int a, b, c; cin >> a >> b >> c;
    t[i] = {a, b, c};
  }
  memset(dp, -1, sizeof(dp));
  cout << foo(1, 1);
  return 0;
}