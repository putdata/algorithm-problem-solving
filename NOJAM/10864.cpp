#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, f[1001] = {};
  cin >> n >> m;
  while (m--) {
    int x, y;
    cin >> x >> y;
    f[x]++;
    f[y]++;
  }
  for (int i = 1; i <= n; i++) cout << f[i] << '\n';
  return 0;
}