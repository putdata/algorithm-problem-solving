#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    long long a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    cout << "Scenario #" << i << ":\n";
    if(a[0] * a[0] + a[1] * a[1] == a[2] * a[2]) cout << "yes";
    else cout << "no";
    if (i < n) cout << "\n\n";
  }
  return 0;
}