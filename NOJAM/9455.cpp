#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n, m; cin >> n >> m;
    int a[n][m], cost = 0;
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++) cin >> a[i][j];
    for (int i = 0; i < m; i++) {
      int stack = 0;
      for (int j = n - 1; j > -1 ;j--) {
        if (a[j][i] == 1) cost += n - 1 - j - stack++;
      }
    }
    cout << cost << '\n';
  }
  return 0;
}