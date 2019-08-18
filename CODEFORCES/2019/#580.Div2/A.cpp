#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  bool a[501] = {}, b[501] = {};
  cin >> n;
  int ai[n];
  for (int i = 0; i < n; i++) {
    cin >> ai[i];
    a[ai[i]] = 1;
  }
  cin >> m;
  int bi[m];
  for (int i = 0; i < m; i++) {
    cin >> bi[i];
    b[bi[i]] = 1;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int x = ai[i] + bi[j];
      if (!a[x] && !b[x]) {
        cout << ai[i] << ' ' << bi[j];
        return 0;
      }
    }
  }
  return 0;
}