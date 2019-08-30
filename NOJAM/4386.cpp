#include <bits/stdc++.h>
using namespace std;

vector<tuple<double, int, int>> vec;
vector<int> p;
int find(int x) {
  if (p[x] == x) return x;
  return p[x] = find(p[x]);
}

void merge(int x, int y) {
  x = find(x), y = find(y);
  p[y] = x;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  p.resize(n + 1);
  for (int i = 1; i <= n; i++) p[i] = i;
  pair<double, double> input[n + 1];
  for (int i = 1; i <= n; i++) {
    double x, y; cin >> x >> y;
    input[i] = {x, y};
  }
  for (int i = 1; i <= n; i++) {
    auto [x1, y1] = input[i];
    for (int j = i + 1; j <= n; j++) {
      auto [x2, y2] = input[j];
      vec.push_back({sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)), i, j});
    }
  }
  sort(vec.begin(), vec.end());
  int cnt = 0;
  double ans = 0;
  for (auto it : vec) {
    auto [cost, x, y] = it;
    if (find(x) != find(y)) {
      ans += cost;
      merge(x, y);
      cnt++;
    }
    if (cnt == n - 1) break;
  }
  cout.precision(4);
  cout << fixed << ans;
  return 0;
}