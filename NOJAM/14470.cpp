#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  int cnt = 0;
  if (a < 0) cnt += e;
  while (a != b) {
    if (a < 0) {
      a++;
      cnt += c;
    } else if (a == 0) {
      a++;
      cnt += d;
    } else {
      a++;
      cnt += e;
    }
  }
  cout << cnt;
  return 0;
}