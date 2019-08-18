#include <bits/stdc++.h>
using namespace std;

int main() {
  cout.precision(3);
  for (;;) {
    double a, b;
    cin >> a >> b;
    if (a == 0.0) break;
    cout << fixed << sqrt(1 - (b * b) / (a * a)) << '\n';
  }
  return 0;
}