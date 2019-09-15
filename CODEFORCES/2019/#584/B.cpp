#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  string s; cin >> s;
  int a[n], b[n];
  for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
  int ans = -1e9;
  for (int time = 0; time < 10000; time++) {
    for (int i = 0; i < n; i++) {
      if (time - b[i] >= 0 && (time - b[i]) % a[i] == 0) s[i] = s[i] == '1' ? '0' : '1';
    }
    // cout << s << '\n';
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '1') cnt++;
    }
    ans = max(ans, cnt);\
  }
  cout << ans;
  return 0;
}