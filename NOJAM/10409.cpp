#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t, ans = 0;
  cin >> n >> t;
  while (n--) {
    int x;
    cin >> x;
    if (t - x >= 0) {
      ans++;
      t -= x;
    } else break;
  }
  cout << ans;
  return 0;
}