#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, ans = 0;
  cin >> n >> m;
  while (n--) {
    int a, b;
    cin >> a >> b;
    m += a - b;
    if (m < 0) {
      cout << 0;
      return 0;
    }
    ans = max(ans, m);
  }
  cout << ans;
  return 0;
}