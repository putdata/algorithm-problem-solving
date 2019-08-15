#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b, c, d;
  cin >> n >> a >> b >> c >> d;
  int x = (n - 1) / a + 1, y = (n - 1) / c + 1;
  cout << min(x * b, y * d);
  return 0;
}