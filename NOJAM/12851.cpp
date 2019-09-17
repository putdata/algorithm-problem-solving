#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, k; cin >> n >> k;
  const int MAX = 1e5;
  priority_queue<pair<int, int>> pq;
  vector<bool> vis(MAX + 1, 0);
  bool found = false;
  int cnt = 0, mini;
  pq.push({0, n});
  while (!pq.empty()) {
    auto [t, cur] = pq.top();
    pq.pop();
    if (cur == k) {
      if (!found) {
        mini = -t;
        cnt++;
        found = true;
      } else {
        if (-t != mini) break;
        cnt++;
      }
      continue;
    }
    vis[cur] = 1;
    if (2 * cur <= MAX && cur > 0 && !vis[2 * cur]) pq.push({t - 1, 2 * cur});
    if (cur - 1 > -1 && !vis[cur - 1]) pq.push({t - 1, cur - 1});
    if (cur + 1 <= k && !vis[cur + 1]) pq.push({t - 1, cur + 1});
  }
  cout << mini << '\n' << cnt;
  return 0;
}