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
  int n, q; cin >> n >> q;
  vector<pair<ll, ll>> vec(n); // x, a
  for (int i = 0; i < n; i++) {
    int x, y; cin >> x >> y;
    vec[i] = {y, x};
  }
  sort(all(vec));
  ll coeff[n + 2][2]{}, c[n + 2][2]{};
  for (int i = n; i > 0; i--) {
    auto [b, a] = vec[i - 1];
    coeff[i][0] = -a + coeff[i + 1][0];
    c[i][0] = a * b + c[i + 1][0];
  }
  for (int i = 1; i <= n; i++) {
    auto [b, a] = vec[i - 1];
    coeff[i][1] = a + coeff[i - 1][1];
    c[i][1] = -a * b + c[i - 1][1];
  }
  while (q--) {
    ll x; cin >> x;
    int idx = upper_bound(all(vec), make_pair(x, 0LL)) - vec.begin();
    ll ans = (coeff[idx + 1][0] + coeff[idx][1]) * x + (c[idx + 1][0] + c[idx][1]);
    cout << ans << '\n';
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}