#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, a, b, c, d;
  cin >> l >> a >> b >> c >> d;
  cout << l - max((a - 1) / c + 1, (b - 1) / d + 1);
  return 0;
}