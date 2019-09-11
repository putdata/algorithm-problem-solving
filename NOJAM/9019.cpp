#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  bool vis[10000] = {};
  while (t--) {
    int a, b; cin >> a >> b;
    queue<pair<int, string>> q;
    q.push({a, ""});
    while (!q.empty()) {
      auto [x, s] = q.front();
      q.pop();
      if (x == b) {
        cout << s << '\n';
        break;
      }
      int t1 = (2 * x) % 10000, t2 = x ? x - 1 : 9999;
      if (!vis[t1]) {
        q.push({t1, s + "D"});
        vis[t1] = 1;
      }
      if (!vis[t2]) {
        q.push({t2, s + "S"});
        vis[t2] = 1;
      }
      t1 = (x % 1000) * 10 + x / 1000, t2 = (x % 10) * 1000 + x / 10;
      if (!vis[t1]) {
        q.push({t1, s + "L"});
        vis[t1] = 1;
      }
      if (!vis[t2]) {
        q.push({t2, s + "R"});
        vis[t2] = 1;
      }
    }
    memset(vis, 0, sizeof(vis));
  }
  return 0;
}