#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n, m; cin >> n >> m;
    int ans = 0;
    for (int i = 1; i < n; i++) {
      for (int j = i + 1; j < n; j++)
        if ((i * i + j * j + m) % (i * j) == 0) ans++;
    }
    cout << ans << '\n';
  }
  return 0;
}