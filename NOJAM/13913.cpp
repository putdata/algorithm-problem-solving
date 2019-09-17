#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, k; cin >> n >> k;
  const int MAX = 1e5 + 1;
  queue<pair<int, int>> q;
  vector<int> vis(MAX, -1), tracker;
  q.push({n, 0}); vis[n] = n;
  while (!q.empty()) {
    auto [cur, t] = q.front();
    q.pop();
    if (cur == k) {
      cout << t << '\n';
      while (cur != n) {
        tracker.push_back(cur);
        cur = vis[cur];
      }
      cout << n << ' ';
      for (int i = tracker.size() - 1; i > -1; i--) cout << tracker[i] << ' ';
      break;
    }
    if (cur * 2 < MAX && vis[cur * 2] == -1) {
      vis[cur * 2] = cur;
      q.push({cur * 2, t + 1});
    }
    if (cur + 1 <= k && vis[cur + 1] == -1) {
      vis[cur + 1] = cur;
      q.push({cur + 1, t + 1});
    }
    if (cur - 1 > -1 && vis[cur - 1] == -1) {
      vis[cur - 1] = cur;
      q.push({cur - 1, t + 1});
    }
  }
  return 0;
}