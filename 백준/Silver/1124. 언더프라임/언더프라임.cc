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
  bool p[100'001]{1, 1};
  for (int i = 2; i <= 100'000; i++) if (!p[i]) {
    for (ll j = i + i; j * j <= 100'000; j += i) p[j] = 1; 
  }
  int a, b; cin >> a >> b;
  int ans = 0;
  for (int i = a; i <= b; i++) {
    int tmp = i, cnt = 0;
    for (int j = 2; j * j <= i && tmp > 1; j++) {
      while (tmp % j == 0) {
        cnt++;
        tmp /= j;
      }
    }
    if (tmp != 1) cnt++;
    if (!p[cnt]) ans++;
  }
  cout << ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}