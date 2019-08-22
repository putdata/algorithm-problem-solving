#include <bits/stdc++.h>
using namespace std;

int f[11];
int main() {
  string a, b;
  cin >> a >> b;
  int alen = a.size(), blen = b.size(), ans = 0;
  for (int i = 1, j = 0; i < blen; i++) {
    while (j > 0 && b[i] != b[j]) j = f[j - 1];
    if (b[i] == b[j]) f[i] = ++j;
  }
  for (int i = 0, j = 0; i < alen; i++) {
    while (j > 0 && a[i] != b[j]) j = f[j - 1];
    if (a[i] == b[j]) {
      if (j == blen - 1) {
        ans++;
        j = f[j];
      } else ++j;
    }
  }
  cout << ans;
  return 0;
}