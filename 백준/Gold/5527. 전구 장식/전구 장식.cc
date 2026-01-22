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
  vector<int> group; group.push_back(0);
  int last = -1, cnt = 0;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    if (x != last) cnt++;
    else {
      group.push_back(cnt);
      cnt = 1;
    }
    last = x;
  }
  group.push_back(cnt); group.push_back(0);
  int ans = 0;
  for (int i = 1; i < sz(group) - 1; i++) {
    ans = max(ans, group[i - 1] + group[i] + group[i + 1]);
  }
  cout << ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}