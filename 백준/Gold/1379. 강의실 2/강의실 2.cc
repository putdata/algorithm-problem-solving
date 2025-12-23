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
  vector<tuple<int, int, int>> vec(n);
  for (auto &[x, y, z] : vec) cin >> z >> x >> y;
  sort(all(vec));
  set<int> s;
  for (int i = 1; i <= n; i++) s.insert(i);
  int ans = 0;
  vector<int> assign(n);
  priority_queue<pii, vector<pii>, greater<>> pq;
  for (auto [x, y, z] : vec) {
    while (!pq.empty() && pq.top().first <= x) {
      s.insert(assign[pq.top().second - 1]);
      pq.pop();
    }
    pq.push({y, z});
    ans = max(ans, sz(pq));
    assign[z - 1] = *s.begin();
    s.erase(s.begin());
  }
  cout << ans << '\n';
  for (auto x : assign) cout << x << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}