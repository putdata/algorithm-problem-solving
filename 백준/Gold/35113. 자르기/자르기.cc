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
  vector<int> vec(n + 1), dp(n + 1), ndp(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> vec[i];
    dp[i] = max(dp[i - 1], vec[i]);
  }
  for (int step = 2; step <= 4; step++) {
    stack<pii> st;
    stack<int> mn;
    for (int i = step; i <= n; i++) {
      int prev = dp[i - 1];
      while (!st.empty() && st.top().first <= vec[i]) {
        prev = min(prev, st.top().second);
        st.pop();
        mn.pop();
      }
      st.push({vec[i], prev});
      int val = vec[i] + prev;
      mn.push(min(sz(mn) ? mn.top() : INF, val));
      ndp[i] = mn.top();
    }
    swap(dp, ndp);
  }
  cout << dp[n];
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}