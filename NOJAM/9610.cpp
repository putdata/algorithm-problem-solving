#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ans[5] = {};
  cin >> n;
  while (n--) {
    int a, b;
    cin >> a >> b;
    if (a == 0 || b == 0) ans[4]++;
    if (a > 0 && b > 0) ans[0]++;
    if (a < 0 && b > 0) ans[1]++;
    if (a < 0 && b < 0) ans[2]++;
    if (a > 0 && b < 0) ans[3]++;
  }
  for (int i = 0; i < 4; i++)
    cout << "Q" << i + 1 << ": " << ans[i] << '\n';
  cout << "AXIS: " << ans[4];
  return 0;
}