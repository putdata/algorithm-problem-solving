#include <bits/stdc++.h>
using namespace std;
const int MAX = 65535;

vector<int> t(MAX * 2 + 1);
void update(int p, int v) {for (t[p += MAX + 1] += v; p > 1; p >>= 1) t[p >> 1] = t[p] + t[p ^ 1];}

int query(int node, int l, int r, int k) {
  if (l == r) return l;
  int mid = (l + r) >> 1;
  if (k <= t[node << 1]) return query(node << 1, l, mid, k);
  return query((node << 1) + 1, mid + 1, r, k - t[node << 1]);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, k; cin >> n >> k;
  int a[n], m = (k + 1) / 2;
  long long ans = 0;
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < k; i++) update(a[i], 1);
  for (int i = k; i < n; i++) {
    ans += query(1, 0, MAX, m);
    update(a[i - k], -1);
    update(a[i], 1);
  }
  cout << ans + query(1, 0, MAX, m);
  return 0;
}