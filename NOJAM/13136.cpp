#include <bits/stdc++.h>
using namespace std;

int main() {
  long long r, c, n; cin >> r >> c >> n;
  long long cctv = (r / n) * (c / n);
  if (r % n) cctv += c / n;
  if (c % n) cctv += r / n;
  if (r % n && c % n) ++cctv;
  cout << cctv;
  return 0;
}