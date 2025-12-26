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
  int n, k; cin >> n >> k;
  if (n == 1) {
    cout << (k ? "Impossible" : "1");
    return;
  }
  vector<int> vec(n + 1); iota(all(vec), 0);
  k = n - k - 1;
  int i = 2;
  if (k > 0 && k % 2) {
    swap(vec[1], vec[2]);
    k--;
    i++;
  }
  for (; i <= n && k > 0; i += 2) {
    swap(vec[i], vec[i + 1]);
    k -= 2;
  }
  if (k != 0) cout << "Impossible";
  else for (int i = 1; i <= n; i++) cout << vec[i] << ' ';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}