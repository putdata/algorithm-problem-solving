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

map<string, double> mp;
map<string, vector<string>> adj;
map<string, int> indeg;

double dfs(string cur) {
  double &ret = mp[cur];
  if (ret != -1.0L) return ret;
  ret = 0;
  for (auto next : adj[cur]) {
    ret += dfs(next);
  }
  return ret /= 2.0;
}

void solve() {
  int n, m; cin >> n >> m;
  string king; cin >> king;
  set<string> pool;
  for (int i = 0; i < n; i++) {
    string child, p1, p2; cin >> child >> p1 >> p2;
    mp[child] = mp[p1] = mp[p2] = -1.0L;
    adj[child].push_back(p1);
    adj[child].push_back(p2);
    indeg[p1] = 1;
    indeg[p2] = 1;
    pool.insert(child);
    pool.insert(p1);
    pool.insert(p2);
  }
  for (auto c : pool) if (sz(adj[c]) == 0) mp[c] = 0;
  mp[king] = 1.;
  for (auto c : pool) if (indeg[c] == 0) dfs(c);
  double mx = -1;
  string ans;
  for (int i = 0; i < m; i++) {
    string s; cin >> s;
    if (mp[s] > mx) {
      mx = mp[s];
      ans = s;
    }
  }
  cout << ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}