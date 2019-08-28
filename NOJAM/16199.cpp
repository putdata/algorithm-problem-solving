#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int a, b, c, aa, bb, cc;
  cin >> a >> b >> c >> aa >> bb >> cc;
  if (a == aa) cout << 0;
  else {
    if (b == bb) c > cc ? cout << aa - a - 1 : cout << aa - a;
    else b < bb ? cout << aa - a : cout << aa - a - 1;
  }
  cout << '\n' << aa - a + 1 << '\n';
  cout << aa - a;
  return 0;
}