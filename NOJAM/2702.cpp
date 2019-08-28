#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    uint a, b; cin >> a >> b;
    int gcd = __gcd(a, b);
    cout << a * b / gcd << ' ' << gcd << '\n';
  }
  return 0;
}