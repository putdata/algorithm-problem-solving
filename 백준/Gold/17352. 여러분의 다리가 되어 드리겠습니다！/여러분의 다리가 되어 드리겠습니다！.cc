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
  int n; cin >> n;
  vector<vector<int>> g(n + 1);
  for (int i = 0; i < n - 2; i++) {
    int x, y; cin >> x >> y;
    g[x].push_back(y);
    g[y].push_back(x);
  }
  vector<int> ans;
  vector<bool> vis(n);
  for (int i = 1; i <= n; i++) if (!vis[i]) {
    ans.push_back(i);
    queue<int> q; q.push(i); vis[i] = true;
    while (!q.empty()) {
      int u = q.front(); q.pop();
      for (int v : g[u]) if (!vis[v]) {
        vis[v] = true;
        q.push(v);
      }
    }
  }
  cout << ans[0] << ' ' << ans[1];
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}