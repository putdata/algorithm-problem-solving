#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> t;
int n, q;
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
      res += upper_bound(t[l].begin(), t[l].end(), p) - t[l].begin();
      l++;
    }
    if (r & 1) {
      r--;
      res += upper_bound(t[r].begin(), t[r].end(), p) - t[r].begin();
    }
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n >> q;
  t.resize(2 * n);
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    t[i + n].push_back(x);
  }
  init();
  while (q--) {
    int a, b, c; cin >> a >> b >> c;
    int l = -1e9, r = 1e9;
    while (l <= r) {
      int mid = (l + r) / 2;
      query(a - 1, b, mid) < c ? l = mid + 1 : r = mid - 1;
    }
    cout << l << '\n';
  }
  return 0;
}