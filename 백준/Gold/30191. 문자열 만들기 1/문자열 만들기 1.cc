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
  stack<char> st;
  int cnt = 0; char p;
  for (auto c : s) {
    if (cnt == 0) {
      cnt++;
      p = c;
      st.push('(');
    } else {
      if (c == p) {
        cnt++;
        st.push('(');
      } else {
        cnt--;
        st.push(')');
      }
    }
  }
  string ans = "";
  int idx = n - 1;
  while (!st.empty()) {
    if (st.top() == ')') {
      ans.push_back(s[idx] == 'U' ? 'S' : 'U');
    }
    ans.push_back('N');
    st.pop();
    idx--;
  }
  cout << sz(ans) << '\n' << ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}