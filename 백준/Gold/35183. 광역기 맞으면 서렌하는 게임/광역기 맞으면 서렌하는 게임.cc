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
  vector<pii> v(n);
  for (auto &[x, y] : v) cin >> x >> y;
  for (int k = 0; k < n; k++) {
    pii cur = k == 0 ? make_pair(-INF, INF) : v[0];
    bool ok = true;
    for (int i = 0; i < n; i++) {
      if (i > 0) cur = {cur.first - 1, cur.second + 1};
      if (i == k) continue;
      cur.first = max(cur.first, v[i].first);
      cur.second = min(cur.second, v[i].second);
      if (cur.first > cur.second) {
        ok = false;
        break;
      }
    }
    if (ok) {
      cout << "World Champion";
      return;
    }
  }
  cout << "Surrender";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}