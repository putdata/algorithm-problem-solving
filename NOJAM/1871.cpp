#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    char a, b, c, d;
    int n;
    cin >> a >> b >> c >> d >> n;
    int fir = (c - 'A') + (b - 'A') * 26 + (a - 'A') * 26 * 26;
    abs(fir - n) <= 100 ? cout << "nice\n" : cout << "not nice\n";
  }
  return 0;
}