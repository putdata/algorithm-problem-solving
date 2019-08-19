#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[3], ans[3];
  cin >> a[0] >> a[1] >> a[2];
  sort(a, a + 3);
  for (int i = 0; i < 3; i++) {
    char x;
    cin >> x;
    ans[i] = x == 'A' ? a[0] : x == 'B' ? a[1] : a[2];
  }
  cout << ans[0] << ' ' << ans[1] << ' ' << ans[2];
  return 0;
}