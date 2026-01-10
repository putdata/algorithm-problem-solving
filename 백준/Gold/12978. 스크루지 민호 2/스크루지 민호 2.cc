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

int n;
vector<vector<int>> adj;
int dp[100001][2];

int dfs(int cur, int p, bool type) {
  int &ret = dp[cur][type];
  if (ret != -1) return ret;
  ret = type;
  for (auto next : adj[cur]) if (next != p) {
    if (type == 0) ret += dfs(next, cur, 1);
    else ret += min(dfs(next, cur, 0), dfs(next, cur, 1));
  }
  return ret;
}

void solve() {
  cin >> n;
  adj.resize(n + 1); memset(dp, -1, sizeof(dp));
  for (int i = 0; i < n - 1; i++) {
    int x, y; cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  cout << min(dfs(1, 1, 0), dfs(1, 1, 1));
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}