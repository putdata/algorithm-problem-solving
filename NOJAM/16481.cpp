#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c;
  cin >> a >> b >> c;
  cout.precision(10);
  cout << fixed << 1 / (1 / a + 1 / b + 1 / c);
  return 0;
}