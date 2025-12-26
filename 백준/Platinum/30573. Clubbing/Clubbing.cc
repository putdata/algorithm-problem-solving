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
  bool dp[1 << 17]{};
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    int bit = 0;
    for (char c : s) bit |= 1 << (c - 'a');
    dp[bit] = 1;
  }
  for (int i = 1; i < (1 << 17); i++) {
    for (int j = 0; j < 17; j++)
      if (i & (1 << j)) dp[i] |= dp[i ^ (1 << j)];
  }
  string sched; cin >> sched;
  vector<int> cnt(300);
  ll ans = 0;
  for (int l = 0, r = 0, bit = 0; l < sz(sched); l++) {
    while (r < sz(sched) && !dp[bit]) {
      bit |= 1 << (sched[r] - 'a');
      cnt[sched[r]]++;
      r++;
    }
    if (dp[bit]) ans += sz(sched) - r + 1LL;
    if (--cnt[sched[l]] == 0) bit ^= 1 << (sched[l] - 'a');
  }
  cout << ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}