#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b; cin >> a >> b;
  int alen = a.size(), blen = b.size();
  int ans = 1e9;
  for (int i = 0; i <= blen - alen; i++) {
    int cnt = 0;
    for (int j = 0; j < alen; j++)
      if (a[j] != b[i + j]) cnt++;
    ans = min(ans, cnt);
  }
  cout << ans;
  return 0;
}