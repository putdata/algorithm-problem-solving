#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> t;
void update(int p) {for (t[p += n] = 1; p > 1; p >>= 1) t[p >> 1] = t[p] + t[p ^ 1];}

int query(int l, int r) {
  int res = 0;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l & 1) res += t[l++];
    if (r & 1) res += t[--r];
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n;
  pair<int, int> p[n];
  t.resize(2 * n);
  for (int i = 0; i < n; i++) {
    cin >> p[i].first;
    p[i].second = i;
  }
  sort(p, p + n);
  int ans[n];
  for (int i = 0; i < n; i++) {
    ans[p[i].second] = p[i].second - query(0, p[i].second) + 1; 
    update(p[i].second);
  }
  for (auto i : ans) cout << i << '\n';
  return 0;
}