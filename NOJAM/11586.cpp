#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, status; cin >> n;
  string a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  cin >> status;
  if (status == 1) {
    for (int i = 0; i < n; i++) cout << a[i] << '\n';
  } else if (status == 2) {
    for (int i = 0; i < n; i++) {
      reverse(a[i].begin(), a[i].end());
      cout << a[i] << '\n';
    }
  } else {
    for (int i = n - 1; i > -1; i--) cout << a[i] << '\n';
  }
  return 0;
}