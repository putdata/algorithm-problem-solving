#include <bits/stdc++.h>
#define fir first
#define sec second
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  pair<int, int> p[n];
  set<pair<int, int>> sat;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    p[i] = {x, y};
  }
  sort(p, p + n);
  int sqDist = 1e9, dist = 1e5;
  for (int i = 0, left = 0; i < n; i++) {
    auto [px, py] = p[i];
    while(px - p[left].fir > dist) sat.erase({p[left].sec, p[left++].fir});
    auto lower = sat.lower_bound({py - dist, -1e9});
    auto upper = sat.upper_bound({py + dist, 1e9});
    for (; lower != upper; lower++) {
      auto [y, x] = *lower;
      int tmp = (px - x) * (px - x) + (py - y) * (py - y);
      if (tmp < sqDist) {
        sqDist = tmp;
        dist = (int) sqrt(sqDist);
      }
    }
    sat.insert({py, px});
  }
  cout << sqDist;
  return 0;
}