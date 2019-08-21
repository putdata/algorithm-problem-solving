#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  while (1) {
    string s; getline(cin, s);
    int size = s.size();
    bool chk[26] = {};
    if (s == "*") break;
    for (int i = 0; i < size; i++) {
      if (s[i] == ' ' ) continue;
      chk[s[i] - 'a'] = 1;
    }
    bool ok = true;
    for (int i = 0; i < 26; i++) ok &= chk[i] == 1;
    ok ? cout << "Y\n" : cout << "N\n";
  }
  return 0;
}