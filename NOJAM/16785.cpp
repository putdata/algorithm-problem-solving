#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, ans = 0;
  cin >> a >> b >> c;
  while (c > 0) {
    c -= a;
    if(++ans % 7 == 0) c -= b;
  }
  cout << ans;
  return 0;
}