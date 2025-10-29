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

const int MAX = 1e6;

void solve() {
  bool p[MAX + 1]{};
  for (int i = 2; i * i <= MAX; i++) if (!p[i]) {
    for (int j = i * i; j <= MAX; j += i) p[j] = 1;
  }
  
  int n; cin >> n;
  for (int i = 2; i <= n; i++) if (!p[i]) {
    unordered_map<int, bool> seen;
    seen[i] = 1;
    int x = i, flag = 0;
    while (1) {
      int sum = 0;
      while (x) {
        sum += (x % 10) * (x % 10);
        x /= 10;
      }
      if (sum == 1) {
        flag = 1;
        break;
      }
      if (seen[sum]) break;
      seen[sum] = 1;
      x = sum;
    }
    if (flag) cout << i << '\n';
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}