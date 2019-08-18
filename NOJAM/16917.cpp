#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  int half = c * min(x, y) * 2 + a * (x - min(x, y)) + b * (y - min(x, y));
  int half2 = c * max(x, y) * 2;
  int all = a * x + b * y;
  cout << min({half, half2, all});
  return 0;
}