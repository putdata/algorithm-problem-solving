#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, k; cin >> n >> k;
  priority_queue<pair<int, int>> q;
  vector<bool> vis(MAX + 1, 0);
  q.push({0, n});
  while (!q.empty()) {
    auto [t, cur] = q.top();
    vis[cur] = 1;
    q.pop();
    if (cur == k) {
      cout << -t;
      break;
    }
    if (cur * 2 <= MAX && cur > 0 && !vis[cur * 2]) q.push({t, cur * 2});
    if (cur - 1 > -1 && !vis[cur - 1]) q.push({t - 1, cur - 1});
    if (cur + 1 <= MAX && !vis[cur + 1]) q.push({t - 1, cur + 1});
  }
  return 0;
}