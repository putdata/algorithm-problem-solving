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
  vector<int> vec(n);
  for (auto &x : vec) cin >> x;

  vector<vector<int>> dp(n + 1, vector<int>(n + 1, INF));
  for (int i = 0; i < n; i++) dp[0][i] = dp[1][i] = 0;
  for (int k = 2; k <= n; k++) {
    for (int i = 0; i <= n - k; i++) {
      dp[k][i] = min({
        dp[k][i],
        dp[k - 1][i] + 1,
        dp[k - 1][i + 1] + 1,
        dp[k - 2][i + 1] + (vec[i] == vec[i + k - 1] ? 0 : 2)
      });
    }
  }
  cout << dp[n][0];
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}