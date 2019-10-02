#include <bits/stdc++.h>
using namespace std;

vector<tuple<int, int, int>> vec;
vector<int> p;
int find(int x) {
  if (p[x] == x) return x;
  return p[x] = find(p[x]);
}

bool merge(int x, int y) {
  x = find(x), y = find(y);
  if (x == y) return 0;
  p[y] = x;
  return 1;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  long long n, m, k; cin >> n >> m >> k;
  if (m < 2) {
    cout << "YES";
    return 0;
  }
  p.resize(n + 1); p[0] = 0;
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    p[i] = i;
    vec.push_back({x, 0, i});
  }
  vector<bool> no(n + 1, 0);
  while (m--) {
    int a, b; cin >> a >> b;
    if (a > b) swap(a, b);
    if (a == 1 && b == n) no[b] = 1;
    else no[a] = 1;
  }
  for (int i = 1; i <= n; i++) {
    if (!no[i]) {
      if (i == n) vec.push_back({0, 1, n});
      else vec.push_back({0, i, i + 1});
    }
  }
  sort(vec.begin(), vec.end());
  int cnt = 0;
  long long total = 0;
  for (auto it : vec) {
    auto [cost, x, y] = it;
    if (merge(x, y)) {
      total += cost;
      if (++cnt == n) break;
    }
  }
  cout << (total <= k ? "YES" : "NO");
  return 0;
}