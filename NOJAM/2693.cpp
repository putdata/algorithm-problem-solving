#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int a[10];
    for (int i = 0; i < 10; i++) cin >> a[i];
    sort(a, a + 10, greater<int>());
    cout << a[2] << '\n';
  }
  return 0;
}