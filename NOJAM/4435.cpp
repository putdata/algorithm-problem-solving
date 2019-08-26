#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  uint a[] = {1, 2, 3, 3, 4, 10}, b[] = {1, 2, 2, 2, 3, 5, 10};
  for (int i = 1; i <= t; i++) {
    uint sum1 = 0, sum2 = 0;
    for (int i = 0; i < 6; i++) {
      uint x; cin >> x;
      sum1 += x * a[i];
    }
    for (int i = 0; i < 7; i++) {
      uint x; cin >> x;
      sum2 += x * b[i];
    }
    cout << "Battle " << i << ": ";
    if (sum1 == sum2) cout << "No victor on this battle field\n";
    else sum1 > sum2 ? cout << "Good triumphs over Evil\n" : cout << "Evil eradicates all trace of Good\n";
  }
  return 0;
}