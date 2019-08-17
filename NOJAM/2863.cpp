#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c, d;
  cin >> a >> b >> c >> d;
  double m2 = c / d + a / b;
  double m3 = d / b + c / a;
  double m1 = a / c + b / d;
  double m4 = b / a + d / c;
  double maxi = max({m1, m2, m3, m4});
  cout << (maxi == m1 ? 0 : maxi == m2 ? 1 : maxi == m3 ? 2 : 3);
  return 0;
}