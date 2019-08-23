#include <bits/stdc++.h>
using namespace std;

int main() {
  while (1) {
    int n; cin >> n;
    if (n == 0) break;
    int last = -1e9;
    for (int i = 0; i < n; i++) {
      int x; cin >> x;
      if (x == last) continue;
      cout << x << ' ';
      last = x;
    }
    cout << "$\n";
  }
  return 0;
}