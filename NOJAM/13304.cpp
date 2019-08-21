#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k; cin >> n >> k;
  int a = 0, b[2] = {}, c[2] = {};
  while (n--) {
    int x, y;
    cin >> x >> y;
    if (y == 1 || y == 2) a++;
    else if (y == 3 || y == 4) b[x]++;
    else c[x]++;
  }
  cout << ((a + k - 1) / k) + ((b[0] + k - 1) / k + (b[1] + k - 1) / k) + ((c[0] + k - 1) / k + (c[1] + k - 1) / k);
  return 0;
}