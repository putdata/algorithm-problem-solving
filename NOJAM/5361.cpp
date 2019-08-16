#include <bits/stdc++.h>
using namespace std;

const double cost[] = {350.34, 230.90, 190.55, 125.30, 180.90};
int main() {
  int t;
  cin >> t;
  cout.precision(2);
  cout << fixed;
  while (t--) {
    double ans = 0;
    for (int i = 0; i < 5; i++) {
      double x;
      cin >> x;
      ans += cost[i] * x;
    }
    cout << '$' << ans << '\n';
  }
  return 0;
}