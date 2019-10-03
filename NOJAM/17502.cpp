#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  string s; cin >> s;
  for (int i = 0; i < n / 2; i++) {
    if (s[i] == '?') {
      if (s[n - i - 1] == '?') s[n - i - 1] = 'a';
      s[i] = s[n - i - 1];
    }
  }
  for (int i = n - 1; i >= n / 2; i--) {
    if (s[i] == '?') s[i] = s[n - 1 - i];
  }
  if (n % 2 && s[n / 2] == '?') s[n / 2] = 'a';
  cout << s;
  return 0;
}