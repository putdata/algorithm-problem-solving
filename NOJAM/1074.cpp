#include <bits/stdc++.h>
using namespace std;

int foo(int n, int x, int y) {
  if (n == 1) {
    return (x % 2 == 0 ? 0 : 2) + y;
  }
  int sect = 1 << (n - 1);
  if (x >= sect) {
    if (y < sect) return (1 << n) * (1 << n) / 2  + foo(n - 1, x - sect, y);
    else return (1 << n) * (1 << n) / 4 * 3 + foo(n - 1, x - sect, y - sect);
  } else {
    if (y < sect) return foo(n - 1, x, y);
    else return (1 << n) * (1 << n) / 4 + foo(n - 1, x, y - sect);
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, r, c; cin >> n >> r >> c;
  cout << foo(n, r, c);
  return 0;
}