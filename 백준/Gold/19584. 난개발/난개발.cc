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
  vector<pii> vec(n + 1);
  for (int i = 1; i <= n; i++) {
    auto &[x, y] = vec[i];
    cin >> x >> y;
  }
  // y-axis 에 대해 스위핑
  vector<tuple<int, int, ll>> v(m);
  for (int i = 0; i < m; i++) {
    int x, y, z; cin >> x >> y >> z;
    int y1 = vec[x].second, y2 = vec[y].second;
    v[i] = {min(y1, y2), max(y1, y2), z};
  }
  sort(all(v));
  priority_queue<pair<ll, ll>> pq;
  ll ans = 0, cost = 0;
  for (auto [x, y, z] : v) {
    while (!pq.empty() && -pq.top().first < x) {
      cost -= pq.top().second;
      pq.pop();
    }
    pq.push({-y, z});
    ans = max(ans, cost += z);
  }
  cout << ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}