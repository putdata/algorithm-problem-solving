#include <bits/stdc++.h>
using namespace std;

int main() {
  for (;;) {
    int a[2][4], i = 0;
    bool bye = 1;
    for (int i = 0; i < 4; i++) {
      cin >> a[0][i];
      bye &= a[0][i] == 0;
    }
    if (bye) break;
    bool pos = 0;
    for (;;) {
      bool same = 1;
      for (int i = 0; i < 3; i++)
        same &= a[pos][i] == a[pos][i + 1];
      if (same) {
        cout << i << '\n';
        break;
      }
      for (int i = 0; i < 4; i++)
        a[!pos][i] = abs(a[pos][i] - a[pos][(i + 1) % 4]);
      pos = !pos;
      i++;
    }
  }
  return 0;
}