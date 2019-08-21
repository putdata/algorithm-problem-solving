#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n, m; cin >> n >> m;
    bool chk[501] = {};
    int no = 0;
    while (n--) {
      int x; cin >> x;
      chk[x] ? no++ : chk[x] = 1;
    }
    cout << no << '\n';
  }
  return 0;
}