#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, al[26] = {};
  cin >> n;
  while (n--) {
    string s;
    cin >> s;
    al[s[0] - 'a']++;
  }
  bool ok = false;
  for (int i = 0; i < 26; i++) {
    if(al[i] >= 5) {
      ok = true;
      cout << char(i + 'a');
    }
  }
  if (!ok) cout << "PREDAJA";
  return 0;
}