#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n, m; cin >> n >> m;
    ll x = 0, y = 0, a[n];
    for (int i = 0; i < m; i++) {
      ll tmp; cin >> tmp;
      x *= 10;
      x += tmp;
    }
    for (int i = 0; i < m; i++) {
      ll tmp; cin >> tmp;
      y *= 10;
      y += tmp;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
      ll tmp = 0;
      for (int j = 0; j < m; j++) {
        tmp *= 10;
        tmp += a[(i + j) % n];
      }
      if (x <= tmp && tmp <= y) cnt++;
    }
    cout << cnt << '\n';
  }
  return 0;
}