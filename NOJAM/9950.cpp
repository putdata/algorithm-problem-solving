#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  while (1) {
    int a, b, c; cin >> a >> b >> c;
    if (!a && !b && !c) break;
    if (!a) cout << c / b << ' ' << b << ' ' << c << '\n';
    if (!b) cout << a << ' ' << c / a << ' ' << c << '\n';
    if (!c) cout << a << ' ' << b << ' ' << a * b << '\n';
  }
  return 0;
}