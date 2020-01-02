#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int a1, a2, b1, b2, c1, c2, d1, d2;
  cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2 >> d1 >> d2;
  int m = max(max(b1, d1) - min(a1, c1), max(b2, d2) - min(a2, c2));
  cout << m * m;
  return 0;
}