#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
vector<ll> t;
void init() {for (int i = n  - 1; i > 0; i--) t[i] = t[i << 1] + t[i << 1 | 1];}

void update(int p, int v) {for (t[p += n] = v; p > 1; p >>= 1) t[p >> 1] = t[p] + t[p ^ 1];}

ll query(int l, int r) {
  ll res = 0;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l & 1) res += t[l++];
    if (r & 1) res += t[--r];
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n; t.resize(n * 2);
  for (int i = 0; i < n; i++) cin >> t[i + n];
  init();
  queue<pair<int, int>> q1;
  vector<tuple<int ,int ,int, int>> off;
  int m; cin >> m;
  for (int i = 0; i < m; i++) {
    int x, y, z, r; cin >> x >> y >> z;
    if (x == 1) q1.push({y, z});
    else {
      cin >> r;
      off.push_back({y, z, r, off.size()});
    }
  }
  int proc = 0;
  sort(off.begin(), off.end());
  ll ans[off.size()];
  for (auto [k, i, j, idx] : off) {
    while (proc < k) {
      proc++;
      auto [p, v] = q1.front();
      q1.pop();
      update(p - 1, v);
    }
    ans[idx] = query(i - 1, j);
  }
  for (auto it : ans) cout << it << '\n';
  return 0;
}