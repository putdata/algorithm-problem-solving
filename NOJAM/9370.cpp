#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 1e8;

int n;
vector<vector<pair<int, ll>>> adj;
vector<int> foo(int s) {
  vector<int> dist(n + 1, INF);
  priority_queue<pair<int, ll>> pq;
  pq.push({0, s}); dist[s] = 0;
  while (!pq.empty()) {
    auto [cost, cur] = pq.top();
    pq.pop();
    if (dist[cur] > -cost) continue;
    for (auto it : adj[cur]) {
      auto [next, need] = it;
      ll tmp = -cost + need;
      if(dist[next] > tmp) {
        dist[next] = tmp;
        pq.push({-tmp, next});
      }
    }
  }
  return dist;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int T; cin >> T;
  while (T--) {
    int m, t; cin >> n >> m >> t;
    int s, g, h; cin >> s >> g >> h;
    adj.clear();
    adj.resize(n + 1);
    while (m--) {
      int a, b, c; cin >> a >> b >> c;
      adj[a].push_back({b, c});
      adj[b].push_back({a, c});
    }
    vector<int> ans;
    vector<int> sD = foo(s), gD = foo(g), hD = foo(h);
    while (t--) {
      int x; cin >> x;
      int tmp = gD[h] + min(sD[g] + hD[x], sD[h] + gD[x]);
      if (tmp < INF && tmp == sD[x]) ans.push_back(x);
    }
    sort(ans.begin(), ans.end());
    for (auto it : ans) cout << it << ' ';
    cout << '\n';
  }
  return 0;
}