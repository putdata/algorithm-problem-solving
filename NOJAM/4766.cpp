#include <bits/stdc++.h>
using namespace std;

int main() {
  double last;
  cin >> last;
  cout.precision(2);
  cout << fixed;
  while (1) {
    double x;
    cin >> x;
    if ((int) x == 999) break;
    cout << x - last << '\n';
    last = x;
  }
  return 0;
}