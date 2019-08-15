#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, b, c;
  cin >> n;
  long long a[n], ans = n;
  for (int i = 0; i < n; i++) cin >> a[i];
  cin >> b >> c;
  for (int i = 0; i < n; i++) {
    a[i] -= b;
    if (a[i] < 1) continue;
    ans += (a[i] - 1) / c + 1;
  }
  cout << ans;
  return 0;
}