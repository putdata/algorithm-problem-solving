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
  int idx;
  for (int i = 0; i < sz(s); i++) if (s[i] == '*') idx = i;
  for (int i = 0; i <= 9; i++) {
    s[idx] = i + '0';
    int sum = 0;
    for (int j = 0; j < sz(s); j++) sum += (s[j] - '0') * (j % 2 ? 3 : 1);
    if (sum % 10 == 0) {
      cout << i;
      return;
    }
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}