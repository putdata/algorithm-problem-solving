#include <bits/stdc++.h>
using namespace std;

int main() {
  while (1) {
    int n, i = 0, fac = 1, ans = 0;
    cin >> n;
    if (n == 0) break;
    while (n && ++i) {
      fac *= i;
      ans += fac * (n % 10);
      n /= 10;
    }
    cout << ans << '\n';
  }
  return 0;
}