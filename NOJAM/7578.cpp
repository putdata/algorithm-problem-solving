#include <bits/stdc++.h>
using namespace std;

vector<int> t;
int n;
void update(int p) {
  for (t[p += n] = 1; p > 1; p >>= 1) t[p >> 1] = t[p] + t[p ^ 1];
}

int query(int l) {
  int r = 2 * n, res = 0;
  for (l += n; l < r; l >>= 1, r >>= 1) {
    if (l & 1) res += t[l++];
    if (r & 1) res += t[--r];
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  t.resize(2 * n, 0);
  pair<int, int> idx[n];
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    idx[i] = {x, i};
  }
  sort(idx, idx + n);
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    int cur = lower_bound(idx, idx + n, pair<int, int>(a[i], 0))->second;
    ans += query(cur);
    update(cur);
  }
  cout << ans;
  return 0;
}