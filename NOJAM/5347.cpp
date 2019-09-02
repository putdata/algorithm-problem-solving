#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  while (n--) {
    unsigned long long a, b; cin >> a >> b;
    cout << a * b / __gcd(a, b) << '\n';
  }
  return 0;
}