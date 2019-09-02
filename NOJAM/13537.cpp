#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> t;
void init() {
  for (int i = n - 1; i > 0; i--) {
    t[i].resize(t[i << 1].size() + t[i << 1 | 1].size());
    merge(t[i << 1].begin(), t[i << 1].end(), t[i << 1 | 1].begin(), t[i << 1 | 1].end(), t[i].begin());
  }
}

int query(int l, int r, int p) {
  int res = 0;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l & 1) {
      res += t[l].end() - upper_bound(t[l].begin(), t[l].end(), p);
      l++;
    }
    if (r & 1) {
      r--;
      res += t[r].end() - upper_bound(t[r].begin(), t[r].end(), p);
    }
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  t.resize(2 * n);
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    t[i + n].push_back(x);
  }
  init();
  cin >> m;
  while (m--) {
    int a, b, c; cin >> a >> b >> c;
    cout << query(a - 1, b, c) << '\n';
  }
  return 0;
}