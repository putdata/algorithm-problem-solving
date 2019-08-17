#include <bits/stdc++.h>
using namespace std;

int main() {
  double d, w, h;
  cin >> d >> h >> w;
  double root = sqrt(w * w + h * h);
  cout << (int) (h * d / root) << ' ' << (int) (w * d / root);
  return 0;
}