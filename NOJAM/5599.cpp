#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, a[234];
  cin >> n;
  for (int i = 0; i < 2 * n; i++) a[i] = i + 1;
  int m;
  cin >> m;
  while (m--) {
    int k;
    cin >> k;
    if (k == 0) {
      int b[234];
      for (int i = 0; i < n; i++) {
        b[i * 2] = a[i];
        b[i * 2 + 1] = a[i + n];
      }
      for (int i = 0; i < 2 * n; i++) a[i] = b[i];
    } else {
      int b[234];
      for (int i = 0; i < k; i++) b[i] = a[i];
      for (int i = k; i < 2 * n; i++) a[i - k] = a[i];
      for (int i = 2 * n - k; i < 2 * n; i++) a[i] = b[i - (2 * n - k)];
    }
  }
  for (int i = 0; i < 2 * n; i++) cout << a[i] << '\n';
  return 0;
}