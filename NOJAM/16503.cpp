#include <bits/stdc++.h>
using namespace std;

int foo(int x, int y, int o) {
  if (o == '+') return x + y;
  if (o == '-') return x - y;
  if (o == '*') return x * y;
  return x / y;
}

int main() {
  int a, b, c;
  char o1, o2;
  cin >> a >> o1 >> b >> o2 >> c;
  int ans1 = foo(foo(a, b, o1), c, o2), ans2 = foo(a, foo(b, c, o2), o1);
  ans1 < ans2 ? cout << ans1 << '\n' << ans2 : cout << ans2 << '\n' << ans1;
  return 0;
}