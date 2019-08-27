#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int maxi = n;
    while (n != 1) {
      n % 2 == 0 ? n >>= 1 : n = n * 3 + 1;
      maxi = max(maxi, n);
    }
    cout << maxi << '\n';
  }
  return 0;
}