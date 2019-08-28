#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  int apple = a * 3 + b * 2 + c;
  int banana = d * 3 + e * 2 + f;
  if (apple == banana) cout << 'T';
  else apple > banana ? cout << 'A' : cout << 'B';
  return 0;
}