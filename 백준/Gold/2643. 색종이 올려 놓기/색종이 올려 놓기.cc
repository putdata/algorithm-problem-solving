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
  for (auto &[x, y] : vec) {
    cin >> x >> y;
    if (y > x) swap(x, y);
  }
  sort(vec.rbegin(), vec.rend());
  vector<int> dp(n, 1);
  for (int i = 1; i < n; i++) {
    auto [cx, cy] = vec[i];
    for (int j = 0; j < i; j++) {
      auto [x, y] = vec[j];
      if (cx <= x && cy <= y) dp[i] = max(dp[i], dp[j] + 1);
    }
  }
  cout << *max_element(all(dp));
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}