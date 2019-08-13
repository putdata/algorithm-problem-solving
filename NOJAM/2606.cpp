#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m, virus = 0;
  cin >> n >> m;
  vector<vector<int>> com(n + 1, vector<int>());
  vector<bool> vis(n + 1, false);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    com[a].push_back(b);
    com[b].push_back(a);
  }
  queue<int> q;
  q.push(1); vis[1] = 1;
  while (!q.empty()) {
    int f = q.front();
    q.pop();
    for (auto it : com[f]) {
      if (!vis[it]) {
        vis[it] = true;
        virus++;
        q.push(it);
      }
    }
  }
  cout << virus;
  return 0;
}