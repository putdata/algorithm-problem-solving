#include <bits/stdc++.h>
using namespace std;

vector<tuple<int, int, int>> vec;
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
  int n, m; cin >> n >> m;
  p.resize(n + 1);
  for (int i = 1; i <= n; i++) p[i] = i;
  while (m--) {
    int a, b, c; cin >> a >> b >> c;
    vec.push_back({c, a, b});
  }
  sort(vec.begin(), vec.end());
  int cnt = 0, ans = 0;
  for (auto it : vec) {
    auto [cost, x, y] = it;
    if (find(x) != find(y)) {
      ans += cost;
      merge(x, y);
      cnt++;
    }
    if (cnt == n - 1) break;
  }
  cout << ans;
  return 0;
}