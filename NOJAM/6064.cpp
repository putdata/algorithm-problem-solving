#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    unsigned int n, m, x, y;
    cin >> n >> m >> x >> y;
    int lcm = n * m / (int) __gcd(n, m);
    int day = x;
    int tx = x, ty = x % m;
    if (ty == 0) ty = m;
    while (day <= lcm && ty != y) {
      day += n;
      ty = (ty + n) % m;
      if (ty == 0) ty = m;
    }
    day <= lcm ? cout << day : cout << -1;
    cout << '\n';
  }
  return 0;
}