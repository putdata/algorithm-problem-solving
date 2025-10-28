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
  vector<int> vec(n), cnt(2'000'001);
  for (auto &x : vec) {
    cin >> x;
    for (int i = 1; i * i <= x; i++) if (x % i == 0) {
      cnt[i]++;
      cnt[x / i]++;
      if (i * i == x) cnt[i]--;
    }
  }
  ll ans = 0;
  for (int i = 1; i <= 2000000; i++) if (cnt[i] > 1)
    ans = max(ans, 1LL * i * cnt[i]);
  cout << ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}