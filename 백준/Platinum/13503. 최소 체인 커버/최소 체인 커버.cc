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
  vector<vector<int>> adj(n);
  for (int i = 0; i < m; i++) {
    int x, y; cin >> x >> y;
    x--; y--;
    adj[x].push_back(y);
  }
  vector<bool> vis(n);
  vector<int> A(n, -1), B(n, -1);
  function<bool(int)> dfs = [&](int x) -> bool {
    vis[x] = 1;
    for (int i : adj[x]) {
      if (B[i] == -1 || (!vis[B[i]] && dfs(B[i]))) {
        A[x] = i;
        B[i] = x;
        return 1;
      }
    }
    return 0;
  };
  int ans = 0;
  for (int i = 0; i < n; i++) {
    fill(all(vis), 0);
    if (dfs(i) == 0) ans++;
  }
  cout << ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}