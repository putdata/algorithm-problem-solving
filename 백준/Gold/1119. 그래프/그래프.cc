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

struct UnionFind {
  vector<int> parent;

  UnionFind(int x) { 
    parent.resize(x);
    iota(all(parent), 0);
  }

  int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
  }

  void merge(int x, int y) {
    x = find(x); y = find(y);
    parent[y] = x;
  }
};

void solve() {
  int n, m = 0; cin >> n;
  if (n == 1) {
    cout << 0;
    return;
  }
  vector<vector<int>> adj(n);
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    for (int j = 0; j < n; j++) if (s[j] == 'Y') {
      adj[i].push_back(j);
      if (i < j) m++;
    }
  }
  UnionFind uf(n);
  int comp = 0;
  for (int i = 0; i < n; i++) if (uf.find(i) == i) {
    if (sz(adj[i]) == 0) {
      cout << -1;
      return;
    }
    queue<int> q;
    comp++;
    q.push(i);
    while (!q.empty()) {
      int cur = q.front(); q.pop();
      for (auto next : adj[cur]) if (uf.find(cur) != uf.find(next)) {
        q.push(next);
        uf.merge(i, next);
      }
    }
  }
  if (n - 1 > m) cout << -1;
  else cout << comp - 1;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}