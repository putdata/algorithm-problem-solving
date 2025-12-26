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
  vector<int> ans(n + 1, -1);
  vector<vector<int>> adj(n + 1);
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    adj[x].push_back(i);
  }
  queue<pii> q;
  q.push({n, 0}); ans[n] = 0;
  while (!q.empty()) {
    auto [cur, cost] = q.front(); q.pop();
    for (auto next : adj[cur]) if (ans[next] == -1) {
      ans[next] = cost + 1;
      q.push({next, cost + 1});
    }
  }
  for (int i = 1; i <= n; i++) cout << ans[i] << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}