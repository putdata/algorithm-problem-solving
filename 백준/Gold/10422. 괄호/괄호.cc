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
  vector<ll> dp(5001);
  dp[0] = 1;
  for (int i = 2; i <= 5000; i += 2) {
    for (int j = 0; j < i; j += 2) {
      dp[i] = (dp[i] + dp[j] * dp[i - j - 2]) % MOD;
    }
  }

  int T; cin >> T;
  while (T--) {
    int n; cin >> n;
    if (n % 2) {
      cout << "0\n";
      continue;
    }
    cout << dp[n] << '\n';
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}