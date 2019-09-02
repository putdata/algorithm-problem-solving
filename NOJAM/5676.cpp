#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> t;
void init() {
  for (int i = n - 1; i > 0; i--) t[i] = t[i << 1] * t[i << 1 | 1];
}

void update(int p, int v) {
  if (v == 0) v = 0;
  else v > 0 ? v = 1 : v = -1;
  for (t[p += n] = v; p > 1; p >>= 1) t[p >> 1] = t[p] * t[p ^ 1];
}

int query(int l, int r) {
  int res = 1;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l & 1) res *= t[l++];
    if (r & 1) res *= t[--r];
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  while (cin >> n >> k) {
    t.clear();
    t.resize(n * 2);
    for (int i = 0; i < n; i++) {
      int x; cin >> x;
      if (x == 0) t[i + n] = 0;
      else t[i + n] = x > 0 ? 1 : -1;
    }
    init();
    while (k--) {
      char a;
      int b, c;
      cin >> a >> b >> c;
      if (a == 'C') update(b - 1, c);
      else {
        int res = query(b - 1, c);
        if (res == 0) cout << 0;
        else res > 0 ? cout << '+' : cout << '-';
      }
    }
    cout << '\n';
  }
  return 0;
}