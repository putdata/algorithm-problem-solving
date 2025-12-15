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
  vector<pair<int, string>> vec;
  vec.push_back({0, ""});
  for (int i = 0; i < n; i++) {
    string op; cin >> op;
    if (op == "type") {
      char c; int t; cin >> c >> t;
      vec.push_back({t, vec.back().second + c});
    } else {
      int x, t; cin >> x >> t;
      int it = lower_bound(all(vec), make_pair(t - x, string(""))) - vec.begin();
      vec.push_back({t, vec[max(0, it - 1)].second});
    }
  }
  cout << vec.back().second;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}