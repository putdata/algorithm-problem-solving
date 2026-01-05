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
  map<int, ll> dp[100];
  int k, n; cin >> k >> n;
  if (k == 0) {
    cout << 0;
    return;
  }
  dp[1][-1] = dp[1][1] = 1;
  dp[1][k] = 0;
  for (int i = 2; i <= n; i++) {
    for (int j = -i + 1; j <= i - 1; j++) {
      dp[i][j - 1] += dp[i - 1][j];
      dp[i][j + 1] += dp[i - 1][j];
    }
    dp[i][k] = 0;
  }
  ll ans = 0;
  for (int i = -n; i < k; i++) ans += dp[n][i];
  cout << ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}