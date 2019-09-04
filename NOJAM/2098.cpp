#include <bits/stdc++.h>
using namespace std;

int n, cost[16][16], w[1 << 16][16];
int foo(int cur, int vis) {
  if (vis == (1 << n) - 1) return cost[cur][0] ? cost[cur][0] : 1e8;
  if (!w[vis][cur]) {
    w[vis][cur] = 1e8;
    for (int i = 0; i < n; i++) {
      if (vis & (1 << i) || !cost[cur][i]) continue;
      w[vis][cur] = min(w[vis][cur], cost[cur][i] + foo(i, vis | (1 << i)));
    }
  }
  return w[vis][cur];
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> cost[i][j];
  cout << foo(0, 1);
  return 0;
}