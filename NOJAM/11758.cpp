#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int x1, x2, x3, y1, y2, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  int d = x1 * y2 + y1 * x3 + x2 * y3 - y2 * x3 - x1 * y3 - y1 * x2;
  cout << (d == 0 ? 0 : d > 0 ? 1 : -1);
  return 0;
}