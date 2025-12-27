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
  string s; cin >> s;
  stack<int> st;
  ll ans = 0;
  for (int i = 0; i < sz(s); i++) if (s[i] == 'T') {
    if (st.empty() || (i - st.top()) % 2 == 0) {
      st.push(i);
    } else {
      ans += i - st.top();
      st.pop();
    }
  }
  cout << (st.empty() ? ans : -1) << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; cin >> t;
  while (t--) solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}