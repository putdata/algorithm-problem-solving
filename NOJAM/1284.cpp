#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  while (1) {
    int n, ans = 1; cin >> n;
    if (n == 0) break;
    while (n) {
      if (n % 10 == 0) ans += 4;
      else if (n % 10 == 1) ans += 2;
      else ans += 3;
      ans++;
      n /= 10;
    }
    cout << ans << '\n';
  }
  return 0;
}