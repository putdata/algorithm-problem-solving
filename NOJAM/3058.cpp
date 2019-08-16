#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a[7], sum = 0, m = 1e9;
    for (int i = 0; i < 7; i++) {
      int x;
      cin >> x;
      if (x % 2 == 0) {
        sum += x;
        m = min(m, x);
      }
    }
    cout << sum << ' ' << m << '\n';
  }
  return 0;
}