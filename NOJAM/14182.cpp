#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  while (1) {
    int x; cin >> x;
    if (x == 0) break;
    if (x <= 1e6) cout << x;
    else if (x <= 5e6) cout << x / 10 * 9;
    else cout << x / 10 * 8;
    cout << '\n';
  }
  return 0;
}