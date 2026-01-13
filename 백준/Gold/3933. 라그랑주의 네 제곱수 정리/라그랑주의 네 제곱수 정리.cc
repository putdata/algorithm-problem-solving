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
  int cnt[1 << 16]{};
  for (int i = 1; i * i < (1 << 16); i++) {
    cnt[i * i]++;
    for (int j = i; i * i + j * j < (1 << 16); j++) {
      cnt[i * i + j * j]++;
      for (int k = j; i * i + j * j + k * k < (1 << 16); k++) {
        cnt[i * i + j * j + k * k]++;
        for (int l = k; i * i + j * j + k * k + l * l < (1 << 16); l++) {
          cnt[i * i + j * j + k * k + l * l]++;
        }
      }
    }
  }
  int x;
  while (cin >> x) {
    if (x == 0) break;
    cout << cnt[x] << '\n';
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}