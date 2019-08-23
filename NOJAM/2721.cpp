#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  while (n--) {
    long long x; cin >> x;
    cout << ((x * (x + 1)) * (x * (x + 1)) / 4 + x * (x + 1) * (2 * x + 1) / 2 + x * (x + 1)) / 2 << '\n';
  }
  return 0;
}