#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
      int n, m, k;
      cin >> n >> m >> k;
      int a[n];
      for (int i = 0; i < n; i++) cin >> a[i];
      bool ok = true;
      for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
          int tmp = a[i];
          int add = k - (a[i + 1] - a[i]);
          if (add < 0) {
            a[i] -= add;
            m += add;
          } else {
            a[i] -= add;
            if (a[i] < 0) a[i] = 0;
          }
          if (add > 0) m += tmp - a[i];
          if (m < 0) {
            cout << "NO\n";
            ok = false;
            break;
          }
        } else {
          int tmp = a[i];
          a[i] -= (a[i] - a[i + 1]) + k;
          if (a[i] < 0) a[i] = 0;
          m += tmp - a[i];
        }
      }
      if (ok) cout << "YES\n";
    }
    return 0;
}