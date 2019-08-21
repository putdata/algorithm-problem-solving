#include <bits/stdc++.h>
using namespace std;

int main() {
  int i = 1;
  while (1) {
    int r, w, l; cin >> r;
    if (r == 0) break;
    cin >> w >> l;
    cout << "Pizza " << i++ << " ";
    cout << ((2 * r) * (2 * r) >= w * w + l * l ? "fits on the table.\n" : "does not fit on the table.\n");
  }
  return 0;
}