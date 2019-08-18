#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, mult = 1, ans = 0, zero = 0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x < -1) {
      ans += -1 - x;
      mult *= -1;
    } else if (x == 0) {
      ans++;
      zero++;
    } else if (x > 1) ans += x - 1;
    else if (x == -1) mult *= -1;
  }
  if (mult < 0) {
    zero ? cout << ans : cout << ans + 2;
  } else cout << ans;
  return 0;
}
