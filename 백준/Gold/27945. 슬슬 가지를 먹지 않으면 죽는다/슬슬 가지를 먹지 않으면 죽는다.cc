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

  UnionFind(int x) { parent.resize(x , -1); }

  int find(int x) {
    if (parent[x] < 0) return x;
    return parent[x] = find(parent[x]);
  }

  void merge(int x, int y) {
    x = find(x); y = find(y);
    if (x == y) return;
    if (parent[x] < parent[y]) {
      parent[x] += parent[y];
      parent[y] = x;
    } else {
      parent[y] += parent[x];
      parent[x] = y;
    }
  }
};

void solve() {
  int n, m; cin >> n >> m;
  vector<tuple<int, int, int>> edge(m);
  for (auto &[x, y, z] : edge) cin >> y >> z >> x;
  sort(all(edge));
  UnionFind uf(n + 1);
  int ans = 1;
  for (auto [w, x, y] : edge) if (uf.find(x) != uf.find(y)) {
    uf.merge(x, y);
    if (w == ans) ans++;
    else break;
  }
  cout << ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}