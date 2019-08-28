#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, k; cin >> n >> k;
  pair<ull, int> p[n];
  for (int i = 0; i < n; i++) {
    int id, g, s, b; cin >> id >> g >> s >> b;
    p[i] = {b + 1e7 * s + 1e14 * g, id};
  }
  sort(p, p + n);
  reverse(p, p + n);
  int rank = 1, acc = 0;
  for (int i = 0; i < n; i++) {
    if (p[i].second == k) {
      cout << rank;
      break;
    }
    if (i != n - 1 && p[i].first != p[i + 1].first) {
      rank = rank + 1 + acc;
      acc = -1;
    }
    acc++;
  }
  return 0;
}