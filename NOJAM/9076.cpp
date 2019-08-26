#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int a[5];
    for (int i = 0; i < 5; i++) cin >> a[i];
    sort(a, a + 5);
    a[3] - a[1] >= 4 ? cout << "KIN\n" : cout << a[1] + a[2] + a[3] << '\n';
  }
  return 0;
}