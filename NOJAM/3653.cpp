#include <bits/stdc++.h>
using namespace std;

vector<int> t;
int n, m, able;
void init() {
  for (int i = n + m - 1; i > 0; i--) t[i] = t[i << 1] + t[i << 1 | 1];
}

void update(int p, int v) {
  for (t[p += n + m] = v; p > 1; p >>= 1) t[p >> 1] = t[p] + t[p ^ 1];
}

int query(int l, int r) {
  int res = 0;
  for (l += n + m, r += n + m; l < r; l >>= 1, r >>= 1) {
    if (l & 1) res += t[l++];
    if (r & 1) res += t[--r];
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int tc; cin >> tc;
  while (tc--) {
    cin >> n >> m;
    vector<int> cur(n);
    for (int i = 0; i < n; i++) cur[i] = m + i;
    able = m - 1;
    t.resize(2 * (n + m));
    fill(t.begin() + n + m - 1, t.begin() + n + 2 * m, 0);
    fill(t.begin() + n + 2 * m, t.end(), 1);
    init();
    for (int i = 0; i < m; i++) {
      int x; cin >> x;
      cout << query(0, cur[x - 1]) << ' ';
      update(cur[x - 1], 0);
      cur[x - 1] = able--;
      update(cur[x - 1], 1);
    }
    cout << '\n';
  }
  return 0;
}