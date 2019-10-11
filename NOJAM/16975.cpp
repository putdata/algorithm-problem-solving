#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
vector<ll> t;
void update(int p, ll v) {for (t[p += n] += v; p > 1; p >>= 1) t[p >> 1] = t[p] + t[p ^ 1];}

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
  ll a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  int m; cin >> m;
  while (m--) {
    int type; cin >> type;
    if (type == 1) {
      int x, y; ll z; cin >> x >> y >> z;
      update(x - 1, z);
      if (y < n) update(y, -z);
    } else {
      int x; cin >> x;
      cout << query(0, x) + a[x - 1] << '\n';
    }
  }
  return 0;
}