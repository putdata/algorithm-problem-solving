#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  long long a[51];
  for (int i = 1; i <= n; i++) cin >> a[i];
  if (a[n - 2] + a[n] == 2 * a[n - 1]) cout << a[n] + a[n] - a[n - 1];
  else cout << a[n] * (a[n] / a[n - 1]);
  return 0;
}