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
  string s, t; cin >> s >> t;
  stack<char> st, tmp;
  for (auto c : s) {
    st.push(c);
    bool flag = 0;
    for (int i = 0; !st.empty() && i < sz(t); i++) {
      if (st.top() != t[sz(t) - 1 - i]) break;
      tmp.push(st.top()); st.pop();
      if (i == sz(t) - 1) flag = 1;
    }
    if (flag) tmp = {};
    while (!tmp.empty()) {
      st.push(tmp.top());
      tmp.pop();
    }
  }
  string ans = "";
  while (!st.empty()) {
    ans.push_back(st.top());
    st.pop();
  }
  reverse(all(ans));
  cout << ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}