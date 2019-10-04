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
    } else cout << t[1].second + 1 << '\n';
  }
  return 0;
}