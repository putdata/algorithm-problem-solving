#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[6];
  for (int i = 1; i < 6; i++) cin >> a[i];
  while (1) {
    bool ok = true;
    for (int i = 1; i < 5; i++) {
      ok &= a[i] == i;
      if (a[i] > a[i + 1]) {
        swap(a[i], a[i + 1]);
        for (int i = 1; i < 6; i++) cout << a[i] << ' ';
        cout << '\n';
      }
    }
    if (ok) break;
  }
  return 0;
}