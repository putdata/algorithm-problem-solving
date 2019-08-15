#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[4], sum = 0, ans = 1e9;
  for (int i = 0; i < 4; i++) {
    cin >> a[i];
    sum += a[i];
  }
  for (int i = 0; i < 3; i++) {
    for (int j = i + 1; j < 4; j++) {
      int x = a[i] + a[j];
      ans = min(ans, abs(sum - 2 * x));
    }
  }
  cout << ans;
  return 0;
}