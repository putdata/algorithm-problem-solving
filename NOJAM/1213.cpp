#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  string s; cin >> s;
  string ans;
  ans.resize(s.size(), 0);
  int a[26] = {};
  for (int i = 0; i < s.size(); i++)
    a[s[i] - 'A']++;
  int l = 0, r = s.size() - 1;
  for (int i = 0; i < 26; i++) {
    while (a[i] / 2) {
      ans[l++] = ans[r--] = char(i + 'A');
      a[i] -= 2;
    }
  }
  int cnt = 0;
  for (int i = 0; i < 26; i++) {
    if (a[i]) {
      ans[l] = char(i + 'A');
      cnt++;
    }
  }
  if (cnt > 1) cout << "I'm Sorry Hansoo";
  else cout << ans;
  return 0;
}