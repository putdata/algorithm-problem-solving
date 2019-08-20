#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  string s;
  int al[26] = {};
  while(getline(cin, s)) {
    int size = s.size();
    for (int i = 0; i < size; i++) {
      if (s[i] == ' ') continue;
      al[s[i] - 'a']++;
    }
  }
  int maxi = -1e9;
  for (int i = 0; i < 26; i++) maxi = max(maxi, al[i]);
  for (int i = 0; i < 26; i++) {
    if (al[i] == maxi) cout << char(i + 'a');
  }
  return 0;
}