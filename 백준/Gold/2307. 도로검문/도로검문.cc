#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_TEST
constexpr bool isLOCAL = true;
#else
constexpr bool isLOCAL = false;
#endif

#define debug if constexpr (isLOCAL) cerr

typedef long long ll;
typedef pair<int, int> pii;
#define sz(x) ((int)x.size())
#define all(x) (x).begin(), (x).end()

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
  int n, m; cin >> n >> m;
  vector<vector<pii>> adj(n + 1);
  vector<pii> edge(m);
  for (int i = 0; i < m; i++) {
    int x, y, z; cin >> x >> y >> z;
    adj[x].push_back({y, z});
    adj[y].push_back({x, z});
    edge[i] = {min(x, y), max(x, y)};
  }
  vector<int> dist(n + 1), p(n + 1);
  auto dijkstra = [&](int excX, int excY, bool trace) -> int {
    fill(all(dist), INF); dist[1] = 0;
    priority_queue<pii> pq;
    pq.push({0, 1});
    while (!pq.empty()) {
      auto [tot, cur] = pq.top(); pq.pop(); tot = -tot;
      if (dist[cur] < tot) continue;
      for (auto [next, w] : adj[cur]) {
        if ((cur == excX && next == excY) || (cur == excY && next == excX)) continue;
        if (dist[next] <= tot + w) continue;
        if (trace == 1) p[next] = cur;
        dist[next] = tot + w;
        pq.push({-dist[next], next});
      }
    }
    return dist[n];
  };
  int origin = dijkstra(-1, -1, 1);
  int ans = 0, cur = n;
  while (p[cur] != 0) {
    int x = dijkstra(cur, p[cur], 0);
    ans = x == INF ? INF : max(ans, x - origin);
    cur = p[cur];
  }
  cout << (ans == INF ? -1 : ans);
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}