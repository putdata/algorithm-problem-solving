#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    long long x; cin >> x;
    cout << x * (x + 1) / 2 << ' ' << x * x << ' ' << x * (x + 1) << '\n';
  }
  return 0;
}