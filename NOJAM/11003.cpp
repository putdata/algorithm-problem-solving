#include <bits/stdc++.h>
using namespace std;

int n, l;
vector<int> t;
void init() {
  for (int i = n - 1; i > 0; i--) t[i] = min(t[i << 1], t[i << 1 | 1]);
}

int query(int l, int r) {
  l = max(l, 0);
  int res = 1e9;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l & 1) res = min(res, t[l++]);
    if (r & 1) res = min(res, t[--r]);
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n >> l;
  t.resize(n * 2);
  for (int i = 0; i < n; i++) cin >> t[n + i];
  init();
  for (int i = 0; i < n; i++) {
    cout << query(i - l + 1, i + 1) << ' ';
  }
  return 0;
}