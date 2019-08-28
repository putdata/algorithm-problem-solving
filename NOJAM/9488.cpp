#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  while (1) {
    long long x; cin >> x;
    if (!x) break;
    cout << (x * (x + 1) * (2 * x + 1) / 6 + x * (x + 1) / 2) / 2 << '\n';
  }
  return 0;
}