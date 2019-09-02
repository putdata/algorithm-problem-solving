#include <bits/stdc++.h>
using namespace std;

long long foo(int x, int y, int z) {
  if (!y) return 1;
  long long prev = foo(x, y / 2, z);
  if (y % 2) return (((prev * prev) % z) * x) % z;
  return (prev * prev) % z;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  long long a, b, c; cin >> a >> b >> c;
  cout << foo(a, b, c);
  return 0;
}