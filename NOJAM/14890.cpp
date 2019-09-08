#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, l; cin >> n >> l;
  int a[n][n];
  for (int i = 0; i < n; i++)
    for (int j =0; j < n; j++) cin >> a[i][j];
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    bool ok = true;
    vector<bool> chk(n, 0);
    for (int j = 1; j < n; j++) {
      ok &= abs(a[i][j] - a[i][j - 1]) < 2;
      if (a[i][j - 1] >= a[i][j]) continue;
      for (int k = j - l; k < j; k++) {
        if (k < 0) {
          ok = false;
          break;
        }
        if (a[i][k] + 1 == a[i][j]) chk[k] = 1;
      }
    }
    for (int j = 0; j < n - 1; j++) {
      ok &= abs(a[i][j] - a[i][j + 1]) < 2;
      if (a[i][j + 1] >= a[i][j]) continue;
      for (int k = j + 1; k <= j + l; k++) {
        if (k >= n) {
          ok = false;
          break;
        }
        ok &= a[i][k] + 1 == a[i][j] && !chk[k];
      }
    }
    if (ok) cnt++;
  }
  for (int i = 0; i < n; i++) {
    bool ok = true;
    vector<bool> chk(n, 0);
    for (int j = 1; j < n; j++) {
      ok &= abs(a[j][i] - a[j - 1][i]) < 2;
      if (a[j - 1][i] >= a[j][i]) continue;
      for (int k = j - l; k < j; k++) {
        if (k < 0) {
          ok = false;
          break;
        }
        ok &= a[k][i] + 1 == a[j][i];
        if (a[k][i] + 1 == a[j][i]) chk[k] = 1;
      }
    }
    for (int j = 0; j < n - 1; j++) {
      ok &= abs(a[j][i] - a[j + 1][i]) < 2;
      if (a[j + 1][i] >= a[j][i]) continue;
      for (int k = j + 1; k <= j + l; k++) {
        if (k >= n) {
          ok = false;
          break;
        }
        ok &= a[k][i] + 1 == a[j][i] && !chk[k];
      }
    }
    if (ok) {
      cnt++;
    }
  }
  cout << cnt;
  return 0;
}