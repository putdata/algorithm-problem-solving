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
  int n, m; cin >> n >> m;
  stack<int> st[m];
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    bool flag = 0;
    for (int j = 0; j < m; j++) {
      if (st[j].empty() || st[j].top() < x) {
        st[j].push(x);
        flag = 1;
        break;
      }
    }
    if (!flag) {
      cout << "NO";
      return;
    }
  }
  cout << "YES";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}