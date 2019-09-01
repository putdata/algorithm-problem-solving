#include <bits/stdc++.h>
using namespace std;

typedef long long int64;

const int64 MOD = 1e9 + 7;

int n, m, k;
vector<int64> seg;
void init() {
  for (int i = n - 1; i > 0; i--) seg[i] = (seg[i << 1] * seg[i << 1 | 1]) % MOD;
}

void update(int p, int64 v) {
  for (seg[p += n] = v; p > 1; p >>= 1) seg[p >> 1] = (seg[p] * seg[p ^ 1]) % MOD;
}

int64 query(int l, int r) {
  int64 res = 1;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l & 1) res = (res * seg[l++]) % MOD;
    if (r & 1) res = (res * seg[--r]) % MOD;
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n >> m >> k;
  seg.resize(n * 2);
  for (int i = 0; i < n; i++) cin >> seg[n + i];
  init();
  for (int i = 0; i < m + k; i++) {
    int a, b, c; cin >> a >> b >> c;
    if (a == 1) update(b - 1, c);
    else cout << query(b - 1, c) << '\n';
  }
  return 0;
}