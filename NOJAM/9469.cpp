#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  cout.precision(6);
  cout << fixed;
  while (t--) {
    int n;
    double d, a, b, f;
    cin >> n >> d >> a >> b >> f;
    cout << n << ' ' << f * (d / (a + b)) << '\n';
  }
  return 0;
}