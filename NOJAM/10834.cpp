#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  long long rotate = 1;
  for (int i = 0; i < n; i++) {
    int x, y, z; cin >> x >> y >> z;
    rotate = rotate / x * y * (z ? -1 : 1);
  }
  rotate > 0 ? cout << "0 " << rotate : cout << "1 " << -rotate;
  return 0;
}