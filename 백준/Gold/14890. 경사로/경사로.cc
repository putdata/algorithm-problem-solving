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
  int n, l; cin >> n >> l;
  auto chk = [&](vector<int> &v) -> bool {
    int lay[n]{};
    for (int i = 1; i < n; i++) {
      if (v[i - 1] - v[i] > 1) return false;
      if (v[i - 1] - v[i] == 1) {
        if (i + l > n) return false;
        for (int j = i; j < i + l; j++) lay[j]++;
      }
    }
    for (int i = n - 2; i >= 0; i--) {
      if (v[i + 1] - v[i] > 1) return false;
      if (v[i + 1] - v[i] == 1) {
        if (i - l < -1) return false;
        for (int j = i; j > i - l; j--) lay[j]++;
      }
    }
    return *max_element(lay, lay + n) <= 1;
  };
  int arr[n][n], ans = 0;
  for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> arr[i][j];
  for (int i = 0; i < n; i++) {
    vector<int> v(n);
    for (int j = 0; j < n; j++) v[j] = arr[i][j];
    ans += chk(v);
    for (int j = 0; j < n; j++) v[j] = arr[j][i];
    ans += chk(v);
  }
  cout << ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}