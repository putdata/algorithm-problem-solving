#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, m; cin >> n >> m;
  vector<int> setA(n);
  for (int i = 0; i < n; i++) cin >> setA[i];
  sort(setA.begin(), setA.end());
  int join = 0;
  for (int i = 0; i < m; i++) {
    int x; cin >> x;
    join += upper_bound(setA.begin(), setA.end(), x) - lower_bound(setA.begin(), setA.end(), x);
  }
  cout << n + m - 2 * join;
  return 0;
}