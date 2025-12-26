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
  // n mod 4. 0 -> n, 1 -> 1, 2-> n + 1, 3 -> 0
  int n, m; cin >> n >> m;
  auto func = [](int x) -> int {
    switch (x % 4) {
      case 0: return x;
      case 1: return 1;
      case 2: return x + 1;
      case 3: return 0;
    }
  };
  n = func(n - 1); m = func(m);
  cout << (n ^ m) << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; cin >> t;
  while (t--) solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}