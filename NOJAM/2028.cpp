#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int sq = n * n;
    int ans = 0;
    int mult = 1;
    while (sq) {
      ans += mult * (sq % 10);
      mult *= 10;
      sq /= 10;
      if (ans == n) {
        cout << "YES\n";
        break;
      } else if (ans > n) {
        cout << "NO\n";
        break;
      }
    }
  }
  return 0;
}