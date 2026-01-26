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
  int arr[n + 1][m + 1];
  vector ldp(n + 2, vector(m + 2, -INF)), rdp = ldp;
  ldp[n][0] = ldp[n + 1][1] = 0; rdp[n + 1][m] = rdp[n][m + 1] = 0;
  for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) cin >> arr[i][j];
  for (int i = 1; i <= m; i++) {
    for (int j = n; j >= 1; j--) {
      ldp[j][i] = arr[j][i] + max(ldp[j + 1][i], ldp[j][i - 1]);
      rdp[j][m + 1 - i] = arr[j][m + 1 - i] + max(rdp[j + 1][m + 1 - i], rdp[j][m + 2 - i]);
    }
  }
  int ans = -INF;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++) ans = max(ans, ldp[i][j] + rdp[i][j]);
  cout << ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}