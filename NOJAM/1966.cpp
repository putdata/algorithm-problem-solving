#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n, m, maxi = -1e9;
    cin >> n >> m;
    queue<pair<int, int>> q;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++) {
      int x; cin >> x;
      pq.push(x);
      q.push({i, x});
    }
    int i = 1;
    while (!q.empty()) {
      auto [idx, w] = q.front();
      q.pop();
      if (w < pq.top()) {
        q.push({idx, w});
        continue;
      }
      if (idx == m) {
        cout << i << '\n';
        break;
      }
      pq.pop();
      i++;
    }
  }
  return 0;
}