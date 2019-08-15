#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  cout.precision(10);
  cout << fixed << (b * (a * c - (a * x) - (c * y) + (x * y))) / ((a * c) - (a * x) - (c * y) + (2 * x * y));
  return 0;
}