#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string a, b; cin >> a >> b;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] == 'W' && b[i] == 'B') cnt1++;
      if (a[i] == 'B' && b[i] == 'W') cnt2++;
    }
    cout << max(cnt1, cnt2) << '\n';
  }
  return 0;
}