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
  string s; cin >> s;
  int n; cin >> n;
  ll cnt[300]{};
  for (int i = 0; i < n; i++) {
    string x; cin >> x;
    cnt[x[0]]++;
  }
  sort(all(s));
  if (s[0] == s[1]) {
    ll x = cnt[s[0]];
    cout << (s[1] == s[2] ? x * (x - 1) * (x - 2) / 6LL : (x * (x - 1) / 2LL) * cnt[s[2]]);
  } else {
    ll x = cnt[s[0]], y = cnt[s[1]], z = cnt[s[2]];
    cout << (s[1] == s[2] ? x * (y * (y - 1) / 2LL) : x * y * z);
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}