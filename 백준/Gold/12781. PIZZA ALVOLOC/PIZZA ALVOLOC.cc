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

// positive: CCW, negative: CW, zero: line
int CCW(pii p1, pii p2, pii p3) {
  auto [x1, y1] = p1;
  auto [x2, y2] = p2;
  auto [x3, y3] = p3;
  int x = (x1 * y2 + x2 * y3 + x3 * y1) - (x2 * y1 + x3 * y2 + x1 * y3);
  return x > 0 ? 1 : (x < 0 ? -1 : 0);
}

bool intersect(pair<pii, pii> line1, pair<pii, pii> line2) {
  auto [p1, p2] = line1;
  auto [p3, p4] = line2;
  int factor1 = CCW(p1, p2, p3) * CCW(p1, p2, p4);
  int factor2 = CCW(p3, p4, p1) * CCW(p3, p4, p2);
  if (factor1 == 0 && factor2 == 0) {
    if (p1 > p2) swap(p1, p2);
    if (p3 > p4) swap(p3, p4);
    return p1 <= p4 && p3 <= p2;
  }
  return factor1 < 0 && factor2 < 0;
}

void solve() {
  pii a, b, c, d;
  cin >> a.first >> a.second;
  cin >> b.first >> b.second;
  cin >> c.first >> c.second;
  cin >> d.first >> d.second;
  cout << intersect(make_pair(a, b), make_pair(c, d));
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
  debug << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}