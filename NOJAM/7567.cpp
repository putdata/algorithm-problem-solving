#include <bits/stdc++.h>
using namespace std;

int main() {
  int ans = 10;
  string s;
  cin >> s;
  for (int i = 1; i < s.size(); i++) {
    s[i] == s[i - 1] ? ans += 5 : ans += 10;
  }
  cout << ans;
  return 0;
}