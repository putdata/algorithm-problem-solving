#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l, a[1001];
  cin >> n >> l;
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  for (int i = 0; i < n; i++) {
    if (a[i] <= l) ++l;
  }
  cout << l;
  return 0;
}