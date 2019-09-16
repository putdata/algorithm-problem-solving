#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    pair<int, int> p[n];
    for (int i = 0; i < n; i++)
      cin >> p[i].first >> p[i].second;
    sort(p, p + n);
    int ans = 1;
    int last = p[0].second;
    for (int i = 1; i < n; i++) {
      if (p[i].second < last) {
        last = p[i].second;
        ans++;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}