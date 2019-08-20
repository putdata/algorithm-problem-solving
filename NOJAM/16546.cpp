#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  bool chk[(1 << 15) + 1] = {};
  for (int i = 0; i < n - 1; i++) {
    int x; cin >> x;
    chk[x] = 1;
  }
  for (int i = 1; i <= n; i++) if (!chk[i])
    cout << i;
  return 0;
}