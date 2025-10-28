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
  map<vector<int>, int> mp;
  vector<vector<int>> vec(n);
  vector<int> tmp;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int x; cin >> x;
      vec[i].push_back(x);
    }
    tmp = vec[i];
    sort(all(tmp));
    for (int j = 0; j < m; j++) {
      vec[i][j] = lower_bound(all(tmp), vec[i][j]) - tmp.begin();
    }
    mp[vec[i]]++;
  }
  int ans = 0;
  for (auto [k, v] : mp) {
    ans += v * (v - 1) / 2;
  }
  cout << ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}