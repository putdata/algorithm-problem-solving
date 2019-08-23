#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    int t = i, tmp = i;
    while (tmp) {
      t += tmp % 10;
      tmp /= 10;
    }
    if (t == n) {
      cout << i;
      return 0;
    }
  }
  cout << 0;
  return 0;
}