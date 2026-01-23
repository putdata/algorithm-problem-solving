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
  char mp[300]{}; mp['U'] = 0; mp['O'] = 'U'; mp['S'] = 'O'; mp['P'] = 'S'; mp['C'] = 'P';
  priority_queue<ll, vector<ll>, greater<>> pq[300];
  pq[0].push(0);
  for (auto c : s) {
    ll x; cin >> x;
    if (sz(pq[mp[c]])) pq[c].push(pq[mp[c]].top() + x);
  }
  cout << (sz(pq['C']) ? pq['C'].top() : -1);
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}