#include <bits/stdc++.h>
using namespace std;

int main() {
  int t = 3;
  while (t--) {
    string s;
    cin >> s;
    int ans = 1;
    int last = s[0], cnt = 1;
    for (int i = 1; i < 8; i++) {
      if (s[i] == last) {
        cnt++;
        ans = max(ans, cnt);
      } else {
        last = s[i];
        cnt = 1;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}