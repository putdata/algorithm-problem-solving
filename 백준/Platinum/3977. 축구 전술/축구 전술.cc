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
vector<vector<int>> comp;
vector<int> id, low, sccId;
stack<int> st;
vector<bool> inSt;
int timer = 0, sccCnt = 0;

void tarjan(int cur) {
  id[cur] = low[cur] = ++timer;
  st.push(cur); inSt[cur] = 1;

  for (int next : g[cur]) {
    if (!id[next]) {
      tarjan(next);
      low[cur] = min(low[cur], low[next]);
    } else if (inSt[next]) low[cur] = min(low[cur], id[next]);
  }

  if (id[cur] == low[cur]) {
    vector<int> c;
    while (1) {
      int x = st.top(); st.pop(); inSt[x] = 0;
      sccId[x] = sccCnt;
      c.push_back(x);
      if (x == cur) break;
    }
    sort(all(c));
    comp.push_back(c);
    sccCnt++;
  }
}

void solve() {
  int n, m; cin >> n >> m;
  g.assign(n, {}); id.assign(n, 0); low.assign(n, 0); sccId.assign(n, 0); inSt.assign(n, 0);
  comp = {};
  timer = sccCnt = 0;

  for (int i = 0; i < m; i++) {
    int x, y; cin >> x >> y;
    g[x].push_back(y);
  }
  for (int i = 0; i < n; i++) if (!id[i]) tarjan(i);

  vector<vector<int>> dag(sccCnt);
  vector<int> indeg(sccCnt);
  for (int i = 0; i < n; i++) for (auto v : g[i]) {
    int x = sccId[i], y = sccId[v];
    if (x != y) {
      dag[x].push_back(y);
      indeg[y]++;
    }
  }
  int cnt = 0, ans;
  for (int i = 0; i < sccCnt; i++) if (!indeg[i]) cnt++, ans = i;
  if (cnt == 1) for (auto x : comp[ans]) cout << x << '\n';
  else cout << "Confused\n";
  cout << "\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; cin >> t;
  while (t--) solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}