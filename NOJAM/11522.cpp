#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int k, n; cin >> k >> n;
    cout << k << ' ' << n * (n + 1) / 2 << ' ' << n * n << ' ' << n * (n + 1) << '\n';
  }
  return 0;
}