#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, w, h;
  cin >> x >> y >> w >> h;
  cout << min({x, w - x, y, h - y});
  return 0;
}