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
  int N, K; cin >> N >> K;
  vector<int> s(N), h(N);
  for (auto &x : s) cin >> x;
  for (auto &x : h) cin >> x;
  vector<int> dp(101);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= 100 - h[i]; j++) {
      dp[j] = max(dp[j], s[i] + dp[j + h[i]]);
    }
    dp[100 - h[i]] = max(dp[100 - h[i]], s[i]);
    vector<int> tmp(101);
    for (int j = 100; j >= K; j--) {
      int mx = 0;
      for (int k = j; k >= j - K; k--) mx = max(mx, dp[k]);
      tmp[j] = mx;
    }
    swap(dp, tmp);
  }
  cout << *max_element(all(dp));
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}