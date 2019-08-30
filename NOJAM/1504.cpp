#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 1e9;

int n, e;
vector<vector<pair<int, ll>>> adj;
int foo(int s, int e) {
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
  return dist[e];
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n >> e;
  adj.resize(n + 1);
  while (e--) {
    int a, b, c; cin >> a >> b >> c;
    adj[a].push_back({b, c});
    adj[b].push_back({a, c});
  }
  ll p1, p2; cin >> p1 >> p2;
  ll p1p2 = foo(p1, p2);
  ll sp1 = foo(1, p1), sp2 = foo(1, p2), p1n = foo(p1, n), p2n = foo(p2, n);
  ll maxi = p1p2 + min(sp1 + p2n, sp2 + p1n);
  if (maxi >= INF) cout << -1;
  else cout << maxi;
  return 0;
}