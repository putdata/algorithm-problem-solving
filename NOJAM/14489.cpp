#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (2 * c > a + b) cout << a + b;
  else cout << a + b - 2 * c;
  return 0;
}