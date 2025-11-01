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

vector<vector<int>> g;
vector<int> id, low, sccId;
stack<int> st;
vector<bool> inSt;
int timer = 0, sccCnt = 0;

void tarjan(int u) {
  id[u] = low[u] = ++timer;
  st.push(u); inSt[u] = true;
  for (int v : g[u]) {
    if (!id[v]) {
      tarjan(v);
      low[u] = min(low[u], low[v]);
    } else if (inSt[v]) low[u] = min(low[u], id[v]);
  }

  if (low[u] == id[u]) {
    while (1) {
      int v = st.top(); st.pop(); inSt[v] = false;
      sccId[v] = sccCnt;
      if (u == v) break;
    }
    sccCnt++;
  }
}

void solve() {
  int n, m; cin >> n >> m;
  // init
  g.assign(n + 1, {}); id.assign(n + 1, 0); low.assign(n + 1, 0); sccId.assign(n + 1, 0); inSt.assign(n + 1, 0);
  timer = sccCnt = 0;
  // process
  for (int i = 0; i < m; i++) {
    int x, y; cin >> x >> y;
    g[x].push_back(y);
  }
  for (int i = 1; i <= n; i++) if (!id[i]) tarjan(i);
  vector<int> indeg(sccCnt);
  int ans = 0;
  for (int i = 1; i <= n; i++) for (int j : g[i]) if (sccId[i] != sccId[j]) indeg[sccId[j]]++;
  for (int i = 0; i < sccCnt; i++) if (indeg[i] == 0) ans++;
  cout << ans << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; cin >> t;
  while (t--) solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}