#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[123], n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) a[i] = i + 1;
  while (m--) {
    int x, y;
    cin >> x >> y;
    reverse(a + x - 1, a + y);
  }
  for (int i = 0; i < n; i++) cout << a[i] << ' ';
  return 0;
}