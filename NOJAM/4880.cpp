#include <bits/stdc++.h>
using namespace std;

int main() {
  while (1) {
    long long a, b, c;
    cin >> a >> b >> c;
    if (a == 0 && b == 0) break;
    if (a + c == 2 * b) cout << "AP " << 2 * c - b << '\n';
    else cout << "GP " << c * (c / b) << '\n';
  }
  return 0;
}