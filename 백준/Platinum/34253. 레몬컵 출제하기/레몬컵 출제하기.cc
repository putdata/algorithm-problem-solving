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

int n, k;
bool dp[1 << 21];

void dfs(int x) {
  if (dp[x]) return;
  dp[x] = 1;
  for (int i = 0; i < k; i++) if (x & (1 << i)) {
    dfs(x ^ (1 << i));
  }
}

void solve() {
  cin >> n >> k;
  int z = 0;
  while (n--) {
    string s; cin >> s;
    if (z) reverse(all(s));
    bitset<21> bit(s);
    int val = bit.to_ulong();
    if (dp[val]) {
      z = 0;
      cout << "WellKnown\n";
    } else {
      dfs(val);
      z = 1;
      cout << "AdHoc\n";
    }
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}