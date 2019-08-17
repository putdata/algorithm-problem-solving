#include <bits/stdc++.h>
using namespace std;

int main() {
  double e = 0, fac = 1;
  cout.precision(9);
  cout << "n e\n- -----------\n";
  for (int i = 0; i < 10; i++) {
    if (i) fac *= i;
    e += 1 / fac;
    if (i < 2) cout << i << ' ' << i + 1 << '\n';
    else if (i == 2) cout << "2 2.5\n";
    else cout << fixed << i << ' ' << e << '\n';
  }
  return 0;
}