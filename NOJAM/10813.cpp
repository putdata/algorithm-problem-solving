#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  int a[101];
  for (int i = 1; i <= n; i++) a[i] = i;
  while (m--) {
    int x, y;
    cin >> x >> y;
    swap(a[x], a[y]);
  }
  for (int i = 0; i < n; i++) cout << a[i + 1] << ' ';
  return 0;
}