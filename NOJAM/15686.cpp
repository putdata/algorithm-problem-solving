#include <bits/stdc++.h>
using namespace std;

int n, m, ans = 1e9;
vector<pair<int, int>> c, h;
bool sel[51];
void foo(int cur, int cnt) {
  if (cur > c.size()) return;
  if (cnt == m) {
    int tmp = 0;
    for (int i = 0; i < h.size(); i++) {
      int mini = 1e9;
      for (int j = 0; j < c.size(); j++)
        if (sel[j]) mini = min(mini, abs(c[j].first - h[i].first) + abs(c[j].second - h[i].second));
      tmp += mini;
    }
    ans = min(ans, tmp);
    return;
  }
  sel[cur] = 1;
  foo(cur + 1, cnt + 1);
  sel[cur] = 0;
  foo(cur + 1, cnt);
}
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int x; cin >> x;
      if (x == 1) h.push_back({i, j});
      else if (x == 2) c.push_back({i, j});
    }
  }
  foo(0, 0);
  cout << ans;
  return 0;
}