#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  long long calc = 0;
  while (n--) {
    long long x, y; cin >> x >> y;
    calc += x * y;
  }
  cout << calc;
  return 0;
}