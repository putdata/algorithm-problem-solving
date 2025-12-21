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

int dp[2][10001];
vector<int> cnt;
vector<vector<int>> adj;

void dfs(int cur, int parent) {
  dp[1][cur] = cnt[cur];
  for (auto next : adj[cur]) if (next != parent) {
    dfs(next, cur);
    dp[0][cur] += max(dp[0][next], dp[1][next]);
    dp[1][cur] += dp[0][next];
  }
}

void solve() {
  int n; cin >> n;
  cnt.resize(n + 1); adj.resize(n + 1);
  for (int i = 1; i <= n; i++) cin >> cnt[i];
  for (int i = 0; i < n - 1; i++) {
    int x, y; cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  dfs(1, 0);
  cout << max(dp[0][1], dp[1][1]);
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}