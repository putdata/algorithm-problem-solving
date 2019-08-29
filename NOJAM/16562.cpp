#include <bits/stdc++.h>
using namespace std;

vector<int> par;
int dfs(int x) {
  if (par[x] == x) return x;
  return par[x] = dfs(par[x]);
}

void sum(int x, int y) {
  int px = dfs(x);
  int py = dfs(y);
  if (px != py) par[py] = px;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m, k; cin >> n >> m >> k;
  int a[n + 1];
  par.resize(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    par[i] = i;
  }
  while (m--) {
    int x, y; cin >> x >> y;
    if (x > y) swap(x, y);
    sum(x, y);
  }
  for (int i = 1; i <= n; i++) dfs(i);
  priority_queue<pair<int, int>> pq;
  vector<bool> vis(n + 1, 0);
  int ans = 0;
  for (int i = 1; i <= n; i++) pq.push({par[i], -a[i]});
  while (!pq.empty()) {
    auto [cur, cost] = pq.top();
    pq.pop();
    if (vis[cur]) continue;
    vis[cur] = 1;
    ans += -cost;
  }
  ans > k ? cout << "Oh no" : cout << ans;
  return 0;
}