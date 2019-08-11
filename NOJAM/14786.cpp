#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  double l = 0, h = 1.0 * (a + 1) * (c + 1);
  while (h - l >= 1e-10) {
    double m = (l + h) / 2;
    double ans = a * m + (b * sin(m));
    ans < c ? l = m : h = m;
  }
  cout.precision(19);
  cout << fixed << h;
  return 0;
}