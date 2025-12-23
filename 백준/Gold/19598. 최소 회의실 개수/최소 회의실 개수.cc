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
  vector<pii> vec(n);
  for (auto &[x, y] : vec) cin >> x >> y;
  sort(all(vec));
  int ans = 0;
  priority_queue<int, vector<int>, greater<>> pq;
  for (auto [x, y] : vec) {
    while (!pq.empty()) {
      if (pq.top() <= x) pq.pop();
      else break;
    }
    pq.push(y);
    ans = max(ans, sz(pq));
  }
  cout << ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}