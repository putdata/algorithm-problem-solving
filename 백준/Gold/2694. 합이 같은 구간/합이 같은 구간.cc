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
  vector<int> vec(n);
  unordered_map<int, bool> mp;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
    sum += vec[i];
    mp[sum] = 1;
  }
  for (int i = 0, acc = 0; i < n; i++) {
    acc += vec[i];
    for (int j = acc;; j += acc) {
      if (j > sum || mp[j] == 0) break;
      if (j == sum) {
        cout << acc << '\n';
        return;
      }
    }
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; cin >> t;
  while (t--) solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}