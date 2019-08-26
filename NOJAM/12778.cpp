#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n;
    char type;
    cin >> n >> type;
    for (int i = 0; i < n; i++) {
      if (type == 'C') {
        char x; cin >> x;
        cout << x - 'A' + 1 << ' ';
      } else {
        int x; cin >> x;
        cout << char(x + 'A' - 1) << ' ';
      }
    }
    cout << '\n';
  }
  return 0;
}