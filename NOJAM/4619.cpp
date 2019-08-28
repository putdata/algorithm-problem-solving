#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  while (1) {
    int x, y; cin >> x >> y;
    if (!x && !y) break;
    int t = pow(x, 1.0 / y);
    pair<int, int> p[3] = {{abs(pow(t - 1, y) - x), t - 1}, {abs(pow(t, y) - x), t}, {abs(pow(t + 1, y) - x), t + 1}};
    sort(p, p + 3);
    cout << p[0].second << '\n';
  }
  return 0;
}