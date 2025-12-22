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
  vector<int> vec(n), psumLeft(n), psumRight(n);
  for (auto &x : vec) cin >> x;
  psumLeft[0] = vec[0]; psumRight[0] = vec[n - 1];
  for (int i = 1; i < n; i++) {
    psumLeft[i] = psumLeft[i - 1] + vec[i];
    psumRight[i] = psumRight[i - 1] + vec[n - i - 1];
  }
  int ans = 0;
  for (int i = 1; i < n; i++) {
    ans = max(ans, 2 * psumLeft[n - 1] - psumLeft[0] - psumLeft[i] - vec[i]);
    ans = max(ans, 2 * psumRight[n - 1] - psumRight[0] - psumRight[i] - vec[n - i - 1]);
    ans = max(ans, psumLeft[i] - psumLeft[0] + psumLeft[n - 2] - psumLeft[i - 1]);
  }
  cout << ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}