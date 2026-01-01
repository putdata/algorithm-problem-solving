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
  int dp[n + 1][m + 2][3]; memset(dp, 0x1F, sizeof(dp));
  for (int i = 1; i <= m; i++) for (int j = 0; j < 3; j++) dp[0][i][j] = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      int x; cin >> x;
      dp[i][j][0] = x + min(dp[i - 1][j + 1][1], dp[i - 1][j + 1][2]);
      dp[i][j][1] = x + min(dp[i - 1][j][0], dp[i - 1][j][2]);
      dp[i][j][2] = x + min(dp[i - 1][j - 1][0], dp[i - 1][j - 1][1]);
    }
  }
  int ans = INF;
  for (int i = 1; i <= m; i++) for (int j = 0; j < 3; j++) ans = min(ans, dp[n][i][j]);
  cout << ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}