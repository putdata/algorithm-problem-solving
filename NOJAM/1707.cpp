#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int v, e; cin >> v >> e;
    vector<vector<int>> adj(v, vector<int>());
    while (e--) {
      int x, y; cin >> x >> y;
      adj[x - 1].push_back(y - 1);
      adj[y - 1].push_back(x - 1);
    }
    vector<int> vis(v, 0);
    bool ok = true;
    for (int i = 0; i < v; i++) {
      if (adj[i].size() && !vis[i]) {
        queue<int> q;
        q.push(i); vis[i] = 1;
        while (!q.empty()) {
          int top = q.front();
          q.pop();
          for (auto it : adj[top]) {
            if (vis[it] && vis[top] == vis[it]) {
              ok = false;
              break;
            } else if (!vis[it]) {
              q.push(it);
              vis[it] = vis[top] == 1 ? 2 : 1;
            }
          }
          if (!ok) break;
        }
        if (!ok) break;
      }
    }
    ok ? cout << "YES\n" : cout << "NO\n";
  }
  return 0;
}