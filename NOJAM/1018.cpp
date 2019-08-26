#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  string s[n];
  for (int i = 0; i < n; i++) cin >> s[i];
  int ans = 1e9;
  for (int i = 0; i <= n - 8; i++) {
    for (int j = 0; j <= m - 8; j++) {
      int cnt1 = 0, cnt2 = 0;
      for (int x = i; x < i + 8; x++) {
        for (int y = j; y < j + 8; y++) {
          if ((x + y - i - j) % 2) s[x][y] == 'B' ? cnt1++ : cnt2++;
          else s[x][y] == 'B' ? cnt2++ : cnt1++;
        }
      }
      ans = min({ans, cnt1, cnt2});
    }
  }
  cout << ans;
  return 0;
}