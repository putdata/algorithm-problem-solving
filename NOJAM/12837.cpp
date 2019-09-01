#include <bits/stdc++.h>
using namespace std;

typedef long long int64;

int n, q;
vector<int64> t;
void init() {
  for (int i = n - 1; i > 0; i--) t[i] = t[i << 1] + t[i << 1 | 1];
}

void update(int p, int v) {
  for (t[p += n] += v; p > 1; p >>= 1) t[p >> 1] = t[p] + t[p ^ 1];
}

int64 query(int l, int r) {
  int64 res = 0;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l & 1) res += t[l++];
    if (r & 1) res += t[--r];
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n >> q;
  t.resize(2 * n, 0);
  while (q--) {
    int a, b, c; cin >> a >> b >> c;
    if (a == 1) update(b - 1, c);
    else cout << query(b - 1, c) << '\n';
  }
  return 0;
}