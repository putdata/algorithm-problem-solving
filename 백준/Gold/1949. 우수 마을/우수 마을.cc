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

// 현재 위치, 우수 여부, 이전 마을
int dfs(int cur, bool best, int prev) {
  if (dp[best][cur] != -1) return dp[best][cur];
  dp[best][cur] = best ? cnt[cur] : 0;
  int nonBest = 0, gap = 0;
  for (auto next : adj[cur]) if (next != prev) {
    if (best) {
      dp[best][cur] += dfs(next, 0, cur);
    } else {
      int v1 = dfs(next, 0, cur), v2 = dfs(next, 1, cur);
      if (v1 > v2) nonBest++;
      dp[best][cur] += max(v1, v2);
      gap = max(gap, max(v1, v2) - min(v1, v2));
    }
  }
  if (!best && nonBest == sz(adj[cur])) {
    dp[best][cur] -= gap;
  }
  return dp[best][cur];
}

void solve() {
  memset(dp, -1, sizeof(dp));
  int n; cin >> n;
  cnt.resize(n + 1); adj.resize(n + 1);
  for (int i = 1; i <= n; i++) cin >> cnt[i];
  for (int i = 0; i < n - 1; i++) {
    int x, y; cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  cout << max(dfs(1, 0, 1), dfs(1, 1, 1));
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}