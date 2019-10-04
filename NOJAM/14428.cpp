#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<int, int>> t;
void init() {
  for (int i = n - 1; i > 0; i--) t[i] = min(t[i << 1], t[i << 1 | 1]);
}

void update(int p, int v) {
  t[p + n] = {v, p};
  for (p += n; p > 1; p >>= 1) t[p >> 1] = min(t[p], t[p ^ 1]);
}

int query(int l, int r) {
  pair<int, int> res = {2e9, 2e9};
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l & 1) res = min(res, t[l++]);
    if (r & 1) res = min(res, t[--r]);
  }
  return res.second;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  t.resize(n * 2);
  for (int i = 0; i < n; i++) {
    cin >> t[i + n].first;
    t[i + n].second = i;
  }
  init();
  int m; cin >> m;
  while (m--) {
    int x; cin >> x;
    if (x == 1) {
      int idx, v; cin >> idx >> v;
      update(idx - 1, v);
    } else {
      int s, e; cin >> s >> e;
      cout << query(s - 1, e) + 1 << '\n';
    }
  }
  return 0;
}