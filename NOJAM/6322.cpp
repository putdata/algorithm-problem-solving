#include <bits/stdc++.h>
using namespace std;

int main() {
  cout.precision(3);
  cout << fixed;
  for (int i = 1;; i++) {
    double a, b, c;
    cin >> a >> b >> c;
    if (a == 0 && b == 0 && c == 0) break;
    if (i != 1) cout << "\n\n";
    cout << "Triangle #" << i << '\n';
    if (a == -1.0) c * c - b * b > 0 ? cout << "a = " << sqrt(c * c - b * b) : cout << "Impossible.";
    if (b == -1.0) c * c - a * a > 0 ? cout << "b = " << sqrt(c * c - a * a) : cout << "Impossible.";
    if (c == -1.0) cout << "c = " << sqrt(a * a + b * b);
  }
  return 0;
}