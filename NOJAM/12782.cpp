#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    string a, b; cin >> a >> b;
    int size = a.size();
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < size; i++) {
      if (a[i] == '0' && b[i] == '1') cnt1++;
      if (a[i] == '1' && b[i] == '0') cnt2++;
    }
    cout << max(cnt1, cnt2) << '\n';
  }
  return 0;
}