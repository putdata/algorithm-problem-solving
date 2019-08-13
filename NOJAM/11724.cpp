#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m, ans = 0;
  cin >> n >> m;
  vector<vector<int>> adj(n + 1, vector<int>());
  vector<bool> vis(n + 1, false);
  while (m--) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  for (int i = 1; i <= n; i++) {
    if (!vis[i]) {
      ans++;
      queue<int> q;
      q.push(i); vis[i] = true;
      while (!q.empty()) {
        int f = q.front();
        q.pop();
        for(auto it : adj[f]) {
          if (vis[it]) continue;
          vis[it] = true;
          q.push(it);
        }
      }
    }
  }
  cout << ans;
  return 0;
}